#include<iostream>
#include<math.h>
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
		void PushInt(int c) {
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
int evaluate(string Postfix) {
	Stack myStack;
	for(int i = 0; i<Postfix.length(); i++) {
		char c = Postfix[i];
		if(c>= '0' && c<= '9') {  // Fixed: Changed || to &&
			int d = c-'0';
			myStack.PushInt(d);
		} else {
			int opt2 = myStack.Peak();  // Right operand (second)
			myStack.Pop();
			int opt1 = myStack.Peak();  // Left operand (first)
			myStack.Pop();
			if(c == '+') {
				myStack.PushInt(opt1 + opt2);
			}else if(c == '-'){
				myStack.PushInt(opt1 - opt2);  // Now correct: left - right
			}else if(c == '/'){
				myStack.PushInt(opt1 / opt2);  // Now correct: left / right
			}else if(c == '*'){
				myStack.PushInt(opt1 * opt2);
			}else if(c == '^'){
				myStack.PushInt(pow(opt1,opt2));
			}else{
				cout<<"Invalid Operator"<<endl;
			}
		}
	}
	return myStack.Peak();
}
int main() {
//	string infix = "(1*2+3)+(4-5/6)";
//  string infix = "1+2-3+4";
	string PostFix = conversion(infix);
	cout<<"Output String is: "<<PostFix<<endl;
	cout<<"Solution of this Postfix is: "<<evaluate(PostFix);
}