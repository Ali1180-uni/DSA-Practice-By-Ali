#include <iostream>
using namespace std;
// Node class definition
class Node {
private:
    int data;
    Node* next;

public:
    Node(int data) : data(data), next(nullptr) {}

    int GetData() const { return data; }
    Node* GetNext() const { return next; }
    void SetNext(Node* next) { this->next = next; }
};

// Function to delete a node from the circular linked list
void Delete(Node*& n, Node*& First, Node*& Last) {
    Node* temp = n;
    if (n->GetNext() == n) {
        delete n;
        n = nullptr;
        First = nullptr;
        Last = nullptr;
        return;
    }
    Node* prev = n;
    while (prev->GetNext() != n) prev = prev->GetNext();
    prev->SetNext(n->GetNext());
    if (n == First) First = n->GetNext();
    if (n == Last) Last = prev;
    n = n->GetNext();
    delete temp;
}

// Function to solve the Josephus problem
int josephus(Node*& First, int k) {
    Node* temp = First;
    while (temp->GetNext() != temp) {
        for (int i = 1; i < k; i++) {
            temp = temp->GetNext();
        }
        Delete(temp, First, temp);
    }
    return temp->GetData();
}

// Function to create a circular linked list
void createList(Node*& First, Node*& Last, int n) {
    First = new Node(1);
    Last = First;
    for (int i = 2; i <= n; i++) {
        Last->SetNext(new Node(i));
        Last = Last->GetNext();
    }
    Last->SetNext(First);
}

int main() {
    Node* First = nullptr;
    Node* Last = nullptr;
    int n = 7;  // Number of people
    int k = 3;  // Interval

    createList(First, Last, n);

    cout << "Last person remaining: " << josephus(First, k) << endl;

    return 0;
}