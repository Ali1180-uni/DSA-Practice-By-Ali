#include<iostream>
using namespace std;
class Stack{
	public:
		int top;
		int arr[10];
		Stack(){
			top = -1;
		}
		bool isFull(){
			if(top == 10){
				return true;
			}else{
				return false;
			}
		}
		bool isEmpty(){
			if(top == -1){
				return true;
			}else{
				return false;
			}
		}
		void Push(int d){
			if(isFull() == true){
				cout<<"Stack is Full"<<endl;
				return;
			}else{
				top++;
				arr[top] = d;
			}
		}
		void pop(){
			if(isEmpty() == true){
				cout<<"Stack is Empty"<<endl;
				return;
			}else{
				top--;
				cout<<"Last Element is Deleted"<<endl;
			}
		}
		void showStack(){
			if(isEmpty() == true){
				cout<<"Stack is Empty"<<endl;
				return;
			}else{
				for(int i = top; i>=0; i--){
					cout<<arr[i]<<"\t";
				}
			}
		}
		void showSize(){
		    if(isEmpty() == true){
				cout<<"Stack is Empty"<<endl;
				return;
			}else{
				cout<<"\nThe Size of Stack is: "<<top+1<<endl;
			}
		}
		void Peak(){
			if(isEmpty() == true){
				cout<<"Stack is Empty"<<endl;
				return;
			}else{
				cout<<"\nThe Peak Element of Stack is: "<<arr[top]<<endl;
			}
		}
		
};
void Convertion(int decimal){
	Stack myStack;
	while(decimal/2 != 0){
		int x = decimal%2;
		myStack.Push(x);
		decimal = decimal/2;
		if(decimal == 1){
			myStack.Push(decimal);
		}
	}
	cout<<"Binary is:"<<endl;
	myStack.showStack();
}
int main(){
	cout<<"Enter Decimal to convert: "<<endl;
	int num;
	cin>>num;
	Convertion(num);
}