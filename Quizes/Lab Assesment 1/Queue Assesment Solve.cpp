#include <iostream>
using namespace std;

class Call {
public:
    int id;
    string name;
    string issue;
};

class Queue {
public:
    int front, rear, size;
    int capacity;
    Call *arr;

    Queue(int cap) {
        capacity = cap;
        arr = new Call[capacity];
        front = 0;
        rear = -1;
        size = 0;
    }

    bool isFull() {
        return size == capacity;
    }

    bool isEmpty() {
        return size == 0;
    }

    void enqueue(int id, string name, string issue) {
        if (isFull()) {
            cout << "Queue is Full\n";
            return;
        }

        rear = (rear + 1) % capacity;
        arr[rear].id = id;
        arr[rear].name = name;
        arr[rear].issue = issue;
        size++;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is Empty\n";
            return;
        }
        front = (front + 1) % capacity;
        size--;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is Empty\n";
            return;
        }

        cout << endl;
        int index = front;

        for (int i = 1; i <= size; i++) {
            cout << "[" << i << "] C00" << arr[index].id
                 << " - " << arr[index].name
                 << " - " << arr[index].issue << endl;

            index = (index + 1) % capacity;
        }
        cout << endl;
    }
};

int main() {

    Queue q(10);

    // 1. Enqueue 3 calls
    q.enqueue(1, "Zara", "Internet Issue");
    q.enqueue(2, "Umar", "Payment Failure");
    q.enqueue(3, "Nida", "Account Locked");

    cout << "Original Call Queue:";
    q.display();

    // 2. Dequeue 1 call
    q.dequeue();

    cout << "\nAfter One Dequeue (Zara’s issue resolved):";
    q.display();

    return 0;
}
