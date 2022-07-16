class Node{
public:
    int data;
    Node *next;
    
    Node(int data){
        this->data = data;
        next = NULL;
    }
};

class Queue {
public:
    Node* head, *tail;
    int size;
    Queue() {
        // Implement the Constructor
        head = NULL;
        tail = NULL;
        size = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        return size==0;
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        size++;
        Node *curr = new Node(data);
        if(head==NULL){
            head = curr;
            tail = curr;
            return;
        }
        tail->next = curr;
        tail = curr;
        return;
    }

    int dequeue() {
        // Implement the dequeue() function
        if(isEmpty()){
            return -1;
        }
        int ans = head->data;
        Node *tmp = head;
        head = head->next;
        if(head==NULL) tail = NULL;
        delete tmp;
        size--;
        return ans;
    }

    int front() {
        // Implement the front() function
        if(isEmpty()) return -1;
        return head->data;
    }
};
