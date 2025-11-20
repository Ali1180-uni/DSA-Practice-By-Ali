#include<iostream>
using namespace std;
class node {
	public:
		int id;
		string item;
		float weight;
		node *next;
		node(){
			next = nullptr;
		}
	node(int i,string s, float w){
		next = nullptr;
		id = i;
		item = s;
		weight = w;
	}
};
class Stack {
	public:
		node *top;
		int limit,count;
		Stack(){
			top = nullptr;
			limit = 10;
			count = 0;
		}
		bool isfull(){
			if(count>=limit){
				return true;
			}else{
				return false;
			}
		}
		bool isempty(){
			if(top == nullptr){
				return true;
			}else{
				return false;
			}
		}
		void push(int i,string d, float w){
			if(isfull() == true){
				cout<<"Stack is full"<<endl;
				return;
			}else{
				node *temp = new node(i,d,w);
				temp->next = top;
				top = temp;
				count++;
			}
		}
		void show(){
			if(isempty() == true){
				cout<<"Stack is Empty"<<endl;
				return;
			}else{
				node *curr = new node();
				curr = top;
				while(curr != nullptr){
					cout<<"Id: "<<curr->id<<" Item: "<<curr->item<<" Weight: "<<curr->weight<<endl;
					curr = curr->next;
				}
			}
		}
};
int main(){
	Stack my;
	my.push(12,"ALi",12.3);
	my.push(13,"ALixa",16.3);
	my.push(14,"ALieq",15.3);
	my.show();
}