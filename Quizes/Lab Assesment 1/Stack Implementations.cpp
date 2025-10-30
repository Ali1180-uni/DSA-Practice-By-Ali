#include<iostream>
using namespace std;
class Stack {
	public:
		int arr[10];
		int top;
		Stack() {
			top = -1;
		}
		bool isEmpty() {
			if(top == -1) {
				return true;
			} else {
				return false;
			}
		}
		bool isFull() {
			if(top == 9) {
				return true;
			} else {
				return false;
			}
		}
		void push(int d) {
			if(isFull() == true) {
				cout<<"Stack is Full"<<endl;
				return;
			} else {
				top++;
				arr[top] = d;
			}
		}
		void pop() {
			if(isEmpty() == true) {
				cout<<"Stack is Empty"<<endl;
				return;
			} else {
				top--;
				return;
			}
		}
		void showSize() {
			if(isEmpty() == true) {
				cout<<"Stack is Empty"<<endl;
				return;
			} else {
				cout<<top+1;
			}
		}
		void showPeak() {
			if(isEmpty() == true) {
				cout<<"Stack is Empty"<<endl;
				return;
			} else {
				cout<<arr[top];
			}
		}
		void show() {
			if(isEmpty() == true) {
				cout<<"Stack is Empty"<<endl;
				return;
			} else {
				for(int i = top; i>=0; i--) {
					cout<<arr[i]<<"\t";
				}
			}
		}
};
int main() {
	Stack mystack;
	mystack.push(12);
	mystack.push(22);
	mystack.push(32);
	mystack.push(42);
	mystack.push(52);
	mystack.push(62);
	cout<<"Stack:"<<endl;
	mystack.show();
	mystack.pop();
	mystack.pop();
	mystack.pop();
	cout<<"\nUpdated Stack"<<endl;
	mystack.show();
	cout<<endl;
	cout<<"Peak Value"<<endl;
	mystack.showPeak();
	cout<<endl;
	cout<<"Size pf Stack"<<endl;
	mystack.showSize();
}