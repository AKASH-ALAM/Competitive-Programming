
struct node {
    int data;
    struct node* left;
    struct node* right;
};
struct node* root;

void insert(int value) {
    struct node* newNode = (struct node*) malloc(sizeof(struct node));
    newNode -> data = value;
    newNode -> left = NULL;
    newNode -> right = NULL;

    if (root == NULL) root = newNode;
    else {
        struct node* tmp = root;
        while (1) {
            if (value <= tmp -> data) {
                if (tmp -> left == NULL) {
                    tmp -> left = newNode;
                    break;
                }
                else tmp = tmp -> left;
            }
            else {
                if (tmp -> right == NULL) {
                    tmp -> right = newNode;
                    break;
                }
                else tmp = tmp -> right;
            }
        }
    }
}

void preOrder(struct node* Node) {
    if (Node == NULL) return;
    cout << Node -> data << " ";
    preOrder(Node -> left);
    preOrder(Node -> right);
}

void solve() {
    root = NULL;

    int n;  cin >> n;
    for (int i = 0; i < n; i++) {
        int in; cin >> in;
        insert(in);
    }

    preOrder(root);
}