#include<iostream>
using namespace std;
//class Node {
//	public:
//		int data;
//		Node *Next;
//		Node() {
//			data = 0;
//			Next = nullptr;
//		}
//};
////Stack with List
//class Stack {
//	public:
//		Node *First,*Last;
//		int limit,count;
//		Stack() {
//			First = nullptr;
//			Last = nullptr;
//			limit = 10;
//			count = 0;
//		}
//		bool isEmpty() {
//			if(First == nullptr) {
//				return true;
//			} else {
//				return false;
//			}
//		}
//		bool isFull() {
//			if(count == limit) {
//				return true;
//			} else {
//				return false;
//			}
//		}
//		void push(int d) {
//			if(isFull() == true) {
//				cout<<"Stack is Full"<<endl;
//				return;
//			}
//			Node *temp = new Node();
//			temp->data = d;
//			if(First == nullptr) {
//				First = temp;
//				Last = temp;
//			} else {
//				Last->Next = temp;
//				Last = temp;
//			}
//			count++;
//		}
//		void show(){
//			Node *Curr = First;
//			while(Curr != nullptr){
//				cout<<Curr->data<<"\t";
//				Curr = Curr->Next;
//			}
//		}
//		void pop() {
//			if(isEmpty() == true) {
//				cout<<"Stack is Empty"<<endl;
//				return;
//			} else if(First == Last) {
//				delete First;
//				First = Last = nullptr;
//				count--;
//			} else {
//				Node *Curr = First;
//				while(Curr->Next != Last) {
//					Curr = Curr->Next;
//				}
//				delete Last;
//				Last = Curr;
//				Last->Next = nullptr;
//				count--;
//				return;
//			}
//		}
//		void showPeak() {
//			if(isEmpty() == true) {
//				cout<<"Stack is Empty"<<endl;
//				return;
//			}else{
//				cout<<Last->data<<endl;
//			}
//		}
//		void showSize() {
//			if(isEmpty() == true) {
//				cout<<"Stack is Empty"<<endl;
//				return;
//			}else{
//				cout<<count<<endl;
//			}
//		}
//};
//
//int main() {
//	Stack mystack;
//	mystack.push(12);
//	mystack.push(22);
//	mystack.push(32);
//	mystack.push(42);
//	mystack.push(52);
//	mystack.push(62);
//	cout<<"Stack:"<<endl;
//	mystack.show();
//	mystack.pop();
//	mystack.pop();
//	mystack.pop();
//	cout<<"\nUpdated Stack"<<endl;
//	mystack.show();
//	cout<<endl;
//	cout<<"Peak Value"<<endl;
//	mystack.showPeak();
//	cout<<endl;
//	cout<<"Size of Stack"<<endl;
//	mystack.showSize();
//}

//Stack with Array
//class Stack {
//	public:
//		int arr[10];
//		int top;
//		Stack() {
//			top = -1;
//		}
//		bool isEmpty() {
//			if(top == -1) {
//				return true;
//			} else {
//				return false;
//			}
//		}
//		bool isFull() {
//			if(top == 9) {
//				return true;
//			} else {
//				return false;
//			}
//		}
//		void push(int d) {
//			if(isFull() == true) {
//				cout<<"Stack is Full"<<endl;
//				return;
//			} else {
//				top++;
//				arr[top] = d;
//			}
//		}
//		void pop() {
//			if(isEmpty() == true) {
//				cout<<"Stack is Empty"<<endl;
//				return;
//			} else {
//				top--;
//				return;
//			}
//		}
//		void showSize() {
//			if(isEmpty() == true) {
//				cout<<"Stack is Empty"<<endl;
//				return;
//			} else {
//				cout<<top+1;
//			}
//		}
//		void showPeak() {
//			if(isEmpty() == true) {
//				cout<<"Stack is Empty"<<endl;
//				return;
//			} else {
//				cout<<arr[top];
//			}
//		}
//		void show() {
//			if(isEmpty() == true) {
//				cout<<"Stack is Empty"<<endl;
//				return;
//			} else {
//				for(int i = top; i>=0; i--) {
//					cout<<arr[i]<<"\t";
//				}
//			}
//		}
//};
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