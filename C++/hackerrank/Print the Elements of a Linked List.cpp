#include <iostream> 
#include <stdlib.h> 
using namespace std;
typedef struct node Node;

struct node {
    int data;
    Node *next;
};

Node *head = NULL;

Node *create_node(int item){
    Node *new_node = (Node *) malloc(sizeof(Node));
    new_node -> data = item;
    new_node -> next = NULL;
    return new_node;
}

void input_node(int item){
    Node *new_node = create_node(item);
    if(head == NULL){
        head = new_node;
    } else{
        Node *next_node = head;
        while(next_node->next != NULL){
            next_node = next_node -> next;
        }
        next_node -> next = new_node;
    }
}

void print_node(){
    Node *node = head;
    while(node != NULL){
        printf("%d\n", node->data);
        node = node -> next;
    }
}

int main(){
    int size, item;
    scanf("%d", &size);
    for(int i = 0; i < size; i++){
        scanf("%d", &item);
        input_node(item);
    }

    print_node();
    return 0;
}