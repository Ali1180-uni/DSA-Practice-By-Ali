#include<iostream>
using namespace std;
class queue {
	public:
		int front,rear;
		int arr[10];
		queue() {
			front = -1;
			rear = -1;
		}
		bool isFull() {
			if((rear+1)%10 == front) {
				return true;
			} else {
				return false;
			}
		}
		bool isEmpty() {
			if(rear == -1) {
				return true;
			} else {
				return false;
			}
		}
		void enqueue(int d) {
			if(isFull() == true) {
				cout<<"Queue is Full"<<endl;
				return;
			} else {
				rear = (rear+1)%10;
				arr[rear] = d;
			}
		}
		void show() {
			if(isEmpty() == true) {
				cout<<"Queue is Empty"<<endl;
				return;
			} else {
				int i = front;
				cout<<arr[i];
				while(true) {
					if(i == rear) {
						break;
					} else {
						i = (i+1)%10;
						cout<<" "<<arr[i]<<" ";
					}
				}
			}
		}
		void dequeue() {
			if(isEmpty() == true) {
				cout<<"Queue is Empty"<<endl;
				return;
			} else {
				front++;
			}
		}
		int showFirst() {
			if(isEmpty() == true) {
				cout<<"Queue is Empty"<<endl;
				return 0;
			} else {
				return arr[front];
			}
		}
		int showSize() {
			if(isEmpty() == true) {
				cout<<"Queue is Empty"<<endl;
				return 0;
			} else if(front<=rear) {
				return (rear-front)+1;
			} else {
				return (10-(front-rear))+1;
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
	myqueue.enqueue(12);
	myqueue.enqueue(13);
	cout<<"\nQueue After Updation"<<endl;
	myqueue.show();
	cout<<"\nThe Front is: "<<endl;
	cout<<"\n"<<myqueue.showFirst()<<endl;
	cout<<"\nThe Size of Queue is: "<<endl;
	cout<<"\n"<<myqueue.showSize()<<endl;
	return 0;
}