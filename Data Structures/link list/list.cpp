
struct node {
    int value;
    struct node* link;
};

struct node* head = NULL;

void push_back(int data) {
    struct node* temp = (struct node*) malloc(sizeof(struct node));
    temp -> value = data;
    temp -> link = NULL;
    if (head == NULL) head = temp;
    else {
        struct node* extra = head;
        while (extra -> link != NULL) extra = extra -> link;
        extra ->link = temp;
    }
}

void push_front(int data) {
    struct node* temp = (struct node*) malloc(sizeof(struct node));
    temp -> value = data;
    temp -> link = head;
    head = temp;

}

void erase(int data) {
    struct node* prev;
    struct node* next;
    prev = head;
    next = head;
    next = next -> link;
    if (prev -> value == data) {
        head = prev -> link;
        free(prev);
    }
    else {
        while (next != NULL) {
            if (next -> value == data) {
                prev -> link = next -> link;
                free(next);
                break;
            }
            next = next -> link;
            prev = prev -> link;
        }
    }
}

void insert(int data) {
    struct node* nw = (struct node*) malloc(sizeof(struct node));
    nw -> value = data;
    if (head == NULL or data < head -> value) {
        nw -> link = head;
        head = nw;
    }
    else {
        struct node* first = head;
        struct node* second = first -> link;
        while (second != NULL and data > second -> value) {
            first = second;
            second = second -> link;
        }
        first -> link = nw;
        nw -> link = second;
    }
}

void print(struct node* Node) {
    while (Node != NULL) {
        cout << Node -> value << " ";
        Node = Node -> link;
    } cout << endl;
}

void solve() {
    int n;  cin >> n;
    int data;

    for (int i = 0; i < n; i++) {
        cin >> data;
        push_back(data);
        push_front(data);
    }

    print(head);
    cout << "After erase : ";
    erase(2);
    print(head);

    head = NULL;
    print(head);

    for (int i = 0; i < n; i++) {
        cin >> data;
        insert(data);
    }
    cout << "Insert value in a sorted way : ";
    print(head);
}
