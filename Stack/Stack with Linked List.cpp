#include<iostream>
using namespace std;
class Node {
	public:
		int data;
		Node *Next;
		Node() {
			data = 0;
			Next = nullptr;
		}
};
class Stack {
	public:
		Node *First, *Last;
		int count,limit;
		Stack() {
			First = nullptr;
			Last = nullptr;
			count = 0;
			limit = 10;
		}
		bool isEmpty() {
			if(First == nullptr) {
				return true;
			} else {
				return false;
			}
		}
		bool isFull() {
			if(count>=limit) {
				return true;
			} else {
				return false;
			}
		}
		void push(int num) {
			if(isFull() == true) {
				cout<<"Stack is Full"<<endl;
				return;
			}
			Node *temp = new Node();
			temp->data = num;
			count ++;
			if(isEmpty() == true) {
				First = Last = temp;
			} else {
				Last->Next = temp;
				Last = temp;
			}
		}
		void pop() {
			if(isEmpty() == true) {
				cout<<"Stack is Empty"<<endl;
				return;
			} else if(First == Last) {
				delete First;
				First = Last =nullptr;
				count--;
				cout<<"deleted";
			} else {
				Node *Curr = First;
				while(Curr->Next != Last) {
					Curr = Curr->Next;
				}
				delete Last;
				Last = Curr;
				Last->Next = nullptr;
				count--;
				return;

			}
		}
		int Peak() {
			if(isEmpty() == true) {
				cout<<"Stack is Empty"<<endl;
				return 0;
			} else {
				return count;
			}
		}
		void show() {
			if(isEmpty() == true) {
				cout<<"Stack is Empty"<<endl;
				return;
			} else {
				Node *Curr = new Node();
				Curr = First;
				while(Curr != nullptr) {
					cout<<Curr->data<<" ";
					Curr = Curr->Next;
				}
			}
		}
};
int main() {
	Stack mystack;
	mystack.push(1);
	mystack.push(2);
	mystack.push(3);
	mystack.push(4);
	mystack.push(5);
	mystack.push(6);
	mystack.push(7);
	int num1 = mystack.Peak();
	mystack.pop();
	mystack.pop();
	int num2 = mystack.Peak();
	mystack.show();
	cout<<"\nSize is: "<<num1<<" Different from "<<num2<<endl;
}