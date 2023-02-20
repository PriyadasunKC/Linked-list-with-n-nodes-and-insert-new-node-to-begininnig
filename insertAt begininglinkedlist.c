# include <stdio.h>
# include <stdlib.h>

int addNewNodeToBegining();
struct node{
    int data;
    struct node * next;
};

// function to implement the linked list
int implimentLinkedList(){
    struct node * head = NULL, *headNode = NULL,*curruntNode = NULL, *newNode = NULL;
    int value = 0, n  = 0;

    printf("How many nodes should in your list : ");
    scanf("%d",&n);
    
    printf("Enter the Value of No: 1 node : ");
    scanf("%d",&value);
    
    headNode = (struct node*) malloc(sizeof(struct node));
    headNode -> data = value;
    headNode -> next = NULL;
    
    head = headNode;
    newNode = head;
    
    for(int i = 1; i < n ; i++){
        printf("Enter the Value of No: %d node : ",i+1);
        scanf("%d",&value);
    
        curruntNode = (struct node*) malloc(sizeof(struct node));
        curruntNode -> data = value;
        curruntNode -> next = NULL;
        
        newNode -> next = curruntNode;
        newNode = newNode-> next;
    }
    
    if( head == NULL){
        printf("Invalid!");
    }else{
        
        printf("Linked list before add the new node\n");
        while(head != NULL){
            printf("%d ",head->data);
            head=head->next;
        }
    }
    addNewNodeToBegining(head,headNode);
    
    return 0;
}

// functio  to add new node to the begining of the linked list
int addNewNodeToBegining(struct node * head, struct node * headNode){
    
    struct node * insetingNode = NULL;
    insetingNode = (struct node*) malloc (sizeof(struct node));
    
    printf("\nEnter the Value of node that add to begining of the list : ");
    scanf("%d",&insetingNode->data);
    insetingNode -> next = NULL;
    
    head = insetingNode;
    insetingNode -> next = headNode;
    
    printf("Linked list before add the new node\n");
    while(head != NULL){
        printf("%d ",head->data);
        head=head->next;
    }
    return 0;
}

int main(){
    implimentLinkedList();
    return 0;
}
