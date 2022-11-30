#include <bits/stdc++.h>
using namespace std;
typedef struct node Node;
struct node {
    int data;
    Node *parent;
    Node *left;
    Node *right;
};

Node *create_node(int value){
    Node *new_node = (Node *) malloc(sizeof(Node));
    if(new_node == NULL){
        cout << "Error! could not create a node" << endl;
        exit(1);
    }
    new_node -> data = value;
    new_node -> parent = NULL;
    new_node -> left = NULL;
    new_node -> right = NULL;
    return new_node;
}

void add_left_child(Node *node, Node *child){
    node -> left = child;
    if(child != NULL) {
        child -> parent = node;
    }
}

void add_right_child(Node *node, Node *child){
    node -> right = child;
    if(child != NULL){
        child -> parent = node;
    }
}

Node *bst_insert(Node *root, Node *node){
    Node *current_node, *parent_node;
    if(root ==  nullptr){
        root = node;
        return root;
    }
    parent_node = nullptr;
    current_node = root;
    while (current_node !=  NULL){
        parent_node = current_node; 
        if(node->data < current_node->data){
            current_node = current_node -> left;
        } else {
            current_node = current_node -> right;
        }
    }
    if(node->data < parent_node->data){
        add_left_child(parent_node, node);
    } else {
        add_right_child(parent_node, node);
    }

    return root;
}

Node *bst_create(){
    Node *root, *node;
    root = create_node(10);
    int array[] = {5, 17, 3, 7, 12, 19, 1, 4};
    for(int i = 0; i < 8; i++){
        node = create_node(array[i]);
        root = bst_insert(root, node);
    }
    return root;
}

Node *search_bst(Node *root, int item){
    Node *node = root;
    while(node != nullptr){
        if(node -> data == item) return node;
        if(item < node->data){
            node = node -> left;
        } else {
            node = node -> right;
        }
    }
    return node;
}

Node *bst_minimum(Node *root){
    Node *node = root;
    while(node -> left){
        node = node -> left;
    }
    return node;
}

Node *bst_transplant(Node *root, Node *current_node, Node *new_node){
    if(current_node == root) root = new_node;
    else if(current_node == current_node -> parent -> left){
        add_left_child(current_node->parent, new_node);
    }
    else {
        add_right_child(current_node->parent, new_node);
    }
    return root;
}

Node *bst_delete(Node *root, Node *node){
    if(node -> left == NULL){
        root = bst_transplant(root, node, node -> right);
    }
    else if(node -> right == NULL){
        root = bst_transplant(root, node, node -> left);
    }
    else {
        Node *smallest_node = bst_minimum(node -> right);
        if(smallest_node->parent != node){
            root = bst_transplant(root, smallest_node, smallest_node->right);
            add_right_child(smallest_node, node -> right);            
        }
        root = bst_transplant(root, node, smallest_node);
        add_left_child(smallest_node, node->left);
    }
    free(node);
    return root;
}
void in_order(Node *node){
    if(node -> left != nullptr) in_order(node -> left);
    cout << node -> data << " ";
    if(node -> right != nullptr) in_order(node -> right);
    
}

int main(){
    Node *root = bst_create();
    in_order(root);
    cout << endl;
    Node *node = search_bst(root, 10);
    if(node != NULL){
        cout << "Will delete : " << node -> data << endl;
        root = bst_delete(root, node);
        cout << "BST: ";
        in_order(root);
        cout << endl;
    }
    else cout << "Not Found!" << endl;

    return 0;
}