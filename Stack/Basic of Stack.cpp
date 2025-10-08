#include<iostream>
using namespace std;
class Stack{
	public:
		int top;
		int arr[5];
		Stack(){
			top = -1;
		}
		bool isFull(){
			if(top == 4){
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
				cout<<"Data Added"<<endl;
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
int main(){
	Stack mystack;
	mystack.Push(12);
	mystack.Push(32);
	mystack.Push(42);
	mystack.Push(52);
	mystack.pop();
	mystack.Push(72);
	mystack.Push(99);
	mystack.Push(88);
	cout<<endl;
	cout<<"The Stack Data is : "<<endl;
	mystack.showStack();
	cout<<endl;
	mystack.showSize();
	cout<<endl;
	mystack.Peak();
}