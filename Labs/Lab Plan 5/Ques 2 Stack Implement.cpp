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
				cout<<"Stack is Full\n";
				return;
			} else {
				top++;
				arr[top] = d;
				cout<<"Added\n";
			}
		}
		int peak() {
			if(isEmpty() == true) {
				cout<<"Stack is Empty\n";
				return 0;
			} else {
				return arr[top];
			}
		}
		void size() {
			if(isEmpty() == true) {
				cout<<"Stack is Empty\n";
				return;
			} else {
				cout<<top+1;
			}
		}
		void pop() {
			if(isEmpty() == true) {
				cout<<"Stack is Empty\n";
				return;
			} else {
				top--;
			}
		}
		void show() {
			if(isEmpty() == true) {
				cout<<"Stack is Empty\n";
				return;
			}
			for(int i = top; i>=0; i--) {
				cout<<arr[i]<<"\t";
			}

		}
};
int main() {
	Stack mystack;
	mystack.push(12);
	mystack.push(32);
	mystack.push(42);
	mystack.push(52);
	mystack.pop();
	mystack.push(72);
	mystack.push(99);
	mystack.push(88);
	cout<<endl;
	cout<<"The Stack Data is : "<<endl;
	mystack.show();
	cout<<endl;
	cout<<"The Stack Size is : "<<endl;
	mystack.size();
	cout<<endl;
	cout<<"The Stack Peak is : "<<endl;
	cout<<mystack.peak();
}