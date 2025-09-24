#include<iostream>
using namespace std;
class Node{
	public:
		int Data;
		Node *Next;
		Node(){
			Data = 0;
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
			temp->Data = d;
			if(First == NULL){
				First = temp;
				Last = temp;
			}else{
				Last->Next = temp;
				Last = temp;
			}
		}
		void ShowData(){
			Node *temp = new Node();
			temp = First;
			if(First == NULL){
				cout<<"List is Empty"<<endl;
				return;
			}
			while(temp!=NULL){
				cout<<temp->Data<<"\t";
			    temp = temp->Next;
			}
		}
};
int main(){
	List mylist;
	mylist.AddList(45);
	mylist.AddList(15);
	mylist.ShowData();
}
