#include <stdlib.h>
#include <stdio.h>	
typedef struct Node
{
    int data;
    struct Node* next;
}Node;

Node* create_node(Node *head, int value){
    Node *node = (Node*) malloc(sizeof(Node));
    node -> data = value;
    node -> next = NULL;
    return node;
}
Node* insert(Node *head,int data)
{
    Node *temp = create_node(head, data);
    if(head == NULL) head = temp;
    else {
        Node *temp2 = head;
        while(temp2 -> next != NULL){
            temp2 = temp2 -> next;
        }
        temp2 -> next = temp;
    }

    return head;
    //Complete this function
}

void display(Node *head)
{
	Node *start=head;
	while(start)
	{
		printf("%d ",start->data);
		start=start->next;
	}
}
int main()
{
	int T,data;
    scanf("%d",&T);
    Node *head=NULL;	
    while(T-->0){
        scanf("%d",&data);
        head=insert(head,data);
    }
  display(head);
		
}

