#include<iostream>
using namespace std;
class Stack {
	public:
		char arr[50];
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
			if(top == 49) {
				return true;
			} else {
				return false;
			}
		}
		void Push(char c) {
			if(isFull() == false) {
				top++;
				arr[top] = c;
			} else {
				cout<<"Stack is Full"<<endl;
				return;
			}
		}
		void Pop() {
			if(isEmpty() == false) {
				top--;
			} else {
				cout<<"Stack is Empty"<<endl;
				return;
			}
		}
		char Peak() {
			if(isEmpty() == false) {
				return arr[top];
			} else {
				cout<<"\nStack is Empty"<<endl;
			}
		}
		void Show() {
			if (!isEmpty()) {
				cout << "The Stack Data is: " << endl;
				for (int i = 0; i <= top; i++) {
					cout << arr[i] << "\t";
				}
			} else {
				cout << "\nStack is Empty" << endl;
			}
		}
};
int Precendence(char c) {
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
bool alphaNumeric(char c) {
	if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')) {
		return true;
	} else {
		return false;
	}
}
string conversion(string infix) {
	Stack myStack;
	string postfix = "";
	for(int i = 0; i < infix.length(); i++) {
		char c = infix[i];
		if(alphaNumeric(c) == true) {
			postfix = postfix + c;
		} else if(c == '(') {
			myStack.Push(c);
		} else if(c == ')') {
			while(myStack.Peak() != '(') {
				postfix = postfix + myStack.Peak();
				myStack.Pop();
			}
			myStack.Pop();
		} else {
			while(myStack.isEmpty() != true && Precendence(c) <= Precendence(myStack.Peak())) {
				postfix = postfix + myStack.Peak();
				myStack.Pop();
			}
			myStack.Push(c);
		}
	}
	while(myStack.isEmpty() != true) {
		postfix = postfix + myStack.Peak();
		myStack.Pop();
	}
	return postfix;
}
int main() {
	string infix = "(A*B+C)+(K-O/P)";
	string PostFix = conversion(infix);
	cout<<"Output String is: "<<PostFix;
}