#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* link;
};
struct Node* head;

void insertAtTheEnd(int value){
    struct Node* temp = (struct Node*) malloc (sizeof(struct Node));
    temp -> data = value;
    temp -> link = NULL;
    if(head == NULL){
        head = temp;
    } else {
        struct Node* t;
        t = head;
        while(t -> link != NULL){
            t = t -> link;
        }
        t -> link = temp;
    }
}

void insert(int value){
    struct Node* temp = (struct Node*) malloc (sizeof(struct Node));
    temp -> data = value;
    if(head == NULL || head -> data > temp -> data){
        temp -> link = head;
        head = temp;
    } else {
        struct Node* pred = head, *p = pred -> link;
        // struct Node* p = pred -> link (same as line 33)
        while(p != NULL && temp -> data > p -> data){
            pred = p;
            p = p -> link;
        }
        pred -> link = temp;
        temp -> link = p;
    }
}

void firstInsert(int value){
    struct Node* temp = (struct Node*) malloc (sizeof(struct Node));
    temp -> data = value;
    temp -> link = head;
    head = temp;
}

void deleteNode(int position){
    if(position == 1){
        struct Node* temp;
        temp = head;
        head = head -> link;
        free(temp);
    } else {
        struct Node* temp1;
        temp1 = head;
        for(int i = 1; i <= position-2; i++){
            temp1 = temp1 -> link;
        }
        struct Node* temp2;
        temp2 = temp1 -> link;
        temp1 -> link = temp2 -> link;
        free(temp2);
    }
}

void print(){
    struct Node* temp;
    temp = head;
    while(temp != NULL){
        printf("%d ", temp -> data);
        temp = temp -> link;
    }
    cout<<endl;
}

int main(){
    head = NULL;
    firstInsert(20);
    firstInsert(12);
    firstInsert(10);
    print();
    insert(15);
    print();
    return 0;
}