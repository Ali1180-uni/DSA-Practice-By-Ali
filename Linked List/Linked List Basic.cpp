#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node *Next;
		Node(){
			data = 0;
			Next = NULL;
		}
};
class List{
	public:
		Node *First,*Last;
		List(){
			First = NULL;
			Last = NULL;
		}
		void AddList(int d){
			Node *temp = new Node();
			temp->data = d;
			if(First == NULL){
				First = temp;
				Last = temp;
			}else{
				Last->Next = temp;
				Last = temp;
			}
		}
		void show(){
			if(First == NULL){
				cout<<"List is Empty:"<<endl;
				return;
			}
			Node *temp = new Node();
			temp = First;
			while(temp!=NULL){
				cout<<temp->data<<"\t";
				temp = temp->Next;
			}
		}
};

int main(){
	List mylist;
	mylist.AddList(15);
	mylist.AddList(45);
	mylist.show();
}
