#include <bits/stdc++.h>
using namespace std;

typedef struct node Node;
struct node{
    Node *prev;
    int data;
    Node *next;
};

Node *create_node(Node *head, int value, Node *prev, Node *next){
    Node *new_node = (Node*) malloc(sizeof(Node));
      new_node -> prev = prev;
      new_node -> data = value;
      new_node -> next = next;
      return new_node;
}

Node *append(Node *head, int value){
    Node *new_node = create_node(head, value, NULL, NULL);
    if(head == NULL) head = new_node;
    else {
        Node *current_node = head;
        while(current_node -> next){
            current_node = current_node -> next;
        }
        current_node -> next = new_node;
        new_node -> prev = current_node;
    }
    return head;
}

Node *prepend(Node *head, int value){
    Node *new_node = create_node(head, value, NULL, NULL);
    new_node -> next = head;
    if(head != NULL) head -> prev = new_node;
    head = new_node;
    return head;
}

void print(Node *head){
    Node *temp = head;
    while(temp){
        cout << temp -> data << " ";
        temp = temp -> next;
    } cout << endl;
}

int main(){
    Node *head = NULL;
    head = append(head, 1);
    head = append(head, 2);
    head = append(head, 3);
    head = append(head, 4);

    head = prepend(head, 1);
    head = prepend(head, 2);
    head = prepend(head, 3);
    head = prepend(head, 4);

    print(head);
    
    return 0;
}