#include<iostream>
using namespace std;
class Stack {
	public:
		char arr[10];
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
		void push(char d) {
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
int Precedence(char c) {
	if(c == '^') {
		return 3;
	} else if(c == '*' || c == '/') {
		return 2;
	} else if(c == '+' || c == '-') {
		return 1;
	} else {
		return 0;
	}
}
bool AlphaNum(char c) {
	if(c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z' || c >= '0' && c <= '9' ) {
		return true;
	} else {
		return false;
	}
}
string Convert(string infix) {
	Stack myStack;
	string postfix = "";
	for(int i = 0; i<infix.length(); i++) {
		char c = infix[i];
		if(AlphaNum(c) == true) {
			postfix+=c;
		} else if(c == '(') {
			myStack.push(c);
		} else if(c == ')') {
			while(myStack.peak()!='(') {
				postfix+=myStack.peak();
				myStack.pop();
			}
			myStack.pop();
		} else {
			while(myStack.isEmpty() != true && Precedence(c)<=Precedence(myStack.peak())) {
				postfix+=myStack.peak();
				myStack.pop();
			}
			myStack.push(c);
		}
	}
	while(myStack.isEmpty() != true) {
		postfix+=myStack.peak();
		myStack.pop();
	}
	return postfix;
}
int main() {
	string infix = "A+B/C";
	string PostFix = Convert(infix);
	cout<<"The PostFix is: "<<PostFix;
}