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
void Convertion(int num){
	if(num<=0){
		cout<<"Invalid Number"<<endl;
		return;
	}
	Stack myStack;
	while(num != 0){
		int d = num%2;
		myStack.push(d);
		num/=2;
	}
	myStack.show();
}
int main(){
	cout<<"Enter number"<<endl;
	int num;
	cin>>num;
	cout<<"Binary is:"<<endl;
	Convertion(num);
}