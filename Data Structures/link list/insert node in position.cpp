#include <bits/stdc++.h>
using namespace std;

typedef struct node Node;
struct node {
    int data;
    Node *link;
};

Node* create_node(int value){
    Node* temp = (Node*) malloc(sizeof(Node));
    temp -> data = value;
    temp -> link = NULL;
    return temp;
}

Node* insurt_back(Node *head, int value){
    Node *temp = create_node(value);
    if(head == NULL) head = temp;
    else {
        Node* tmp = head;
        while(tmp -> link != NULL){
            tmp = tmp -> link;
        }
        tmp -> link = temp;
    }
    return head;
}

Node* insert_position(Node *head, int position, int value){
    Node *temp = create_node(value);
    if(position == 0){
        temp -> link = head;
        head = temp;
    }
    else {
        Node *temp2 = head;
        for(int i = 1; i < position; i++){
            temp2 = temp2 -> link;
        }
        Node *t = temp2 -> link;
        temp2 -> link = temp;
        temp -> link = t;
    }
    return head;
}

void print(Node *head) {
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << endl;
        temp = temp -> link;
    }
}
int main(){
    Node *head = NULL;
    head = insurt_back(head, 2);
    head = insurt_back(head, 21);
    head = insurt_back(head, 22);
    head = insert_position(head, 1, 5);
    print(head);
    return 0;
}