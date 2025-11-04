#include<iostream>
using namespace std;
class node {
	public:
		int data;
		node *next;
		node() {
			next = nullptr;
			data = 0;
		}
};
class queue {
	public:
		node *front,*rear;
		int count,limit;
		queue() {
			front = nullptr;
			rear = nullptr;
			count = 0;
			limit = 5;
		}
		bool isFull() {
			if(count >= limit) {
				return true;
			} else {
				return false;
			}
		}
		bool isEmpty() {
			if(count == 0) {
				return true;
			} else {
				return false;
			}
		}
		void enqueue(int d) {
			if(isFull() == true) {
				cout<<"Queue is Full"<<endl;
				return;
			}
			node *temp = new node();
			temp->data = d;
			if(front == nullptr) {
				front = temp;
				rear = temp;
			} else {
				rear->next = temp;
				rear = temp;
			}
			count++;
		}
		void show() {
			node *curr = front;
			if(front == nullptr) {
				cout<<"Queue is empty"<<endl;
				return;
			}
			while(curr!=nullptr) {
				cout<<curr->data<<" ";
				curr = curr->next;
			}
		}
		void dequeue() {
			if(isEmpty() == true) {
				cout<<"Queue is Empty"<<endl;
				return;
			} else {
				front = front->next;
				count--;
			}
		}
		int showFirst() {
			if(isEmpty() == true) {
				cout<<"Queue is Empty"<<endl;
				return 0;
			} else {
				return front->data;
			}
		}
		int showSize() {
			if(isEmpty() == true) {
				cout<<"Queue is Empty"<<endl;
				return 0;
			} else {
				return count;
			}
		}
};
int main() {
	queue myqueue;
	myqueue.enqueue(12);
	myqueue.enqueue(13);
	myqueue.enqueue(14);
	myqueue.enqueue(15);
	myqueue.enqueue(115);
	myqueue.enqueue(16);
	cout<<"Queue"<<endl;
	myqueue.show();
	myqueue.dequeue();
	myqueue.dequeue();
	cout<<"\nQueue After Updation"<<endl;
	myqueue.show();
	cout<<"\nThe Front is: "<<endl;
	cout<<"\n"<<myqueue.showFirst()<<endl;
	cout<<"\nThe Size of Queue is: "<<endl;
	cout<<"\n"<<myqueue.showSize()<<endl;
	return 0;
}