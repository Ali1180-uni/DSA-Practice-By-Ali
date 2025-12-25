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
bool Check(string infix){
	Stack myStack;
	for(int i = 0; i<infix.length(); i++){
		char c = infix[i];
		// Push all opening brackets
		if(c == '(' || c == '{' || c == '['){
			myStack.push(c);
		}
		// Check all closing brackets
		else if(c == ')' || c == '}' || c == ']'){
			if(myStack.isEmpty() == true){
				return false;  // Closing bracket without opening
			}else{
				char d = myStack.peak();
				// Check if brackets match (with proper parentheses)
				if((c == ')' && d == '(') || (c == '}' && d == '{') || (c == ']' && d == '[')){
					myStack.pop();
				}else{
					return false;  // Mismatched brackets
				}
			}
		}
	}
	return myStack.isEmpty();  // True if all brackets matched
}
int main() {
	string infix = "(A+B/C)+{12+34}-[2+0";
	bool CheckBalance = Check(infix);
	cout<<"For "<<infix<<endl;
	if(CheckBalance == true){
		cout<<"Your Equation is ok"<<endl;
	}else{
		cout<<"Equation is not correct"<<endl;
	}
}