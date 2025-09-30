#include<iostream>
using namespace std;
class Node{
	public:
	   int Data;
	   Node *Next;
	   Node(){
	   	Data = 0;
	   	Next = nullptr;
	}		
};
class List{
	public:
		Node *First,*Last;
		List(){
			First = nullptr;
			Last = nullptr;
		}
		void Additem(int d){
			Node *temp = new Node();
			temp->Data = d;
			if(First == nullptr){
				First = temp;
				Last = temp;
			}else{
				Last->Next = temp;
				Last = temp;
			}
		}
		void Show(){
			if(First == nullptr){
				cout<<"List is Empty\n";
				return;
			}else{
				Node *temp = new Node();
				temp = First;
				while(temp != nullptr){
				   cout<<temp->Data<<"\t";
				   temp = temp->Next;	
				}
			}
		}
		void Delete(int d){
			if(First == nullptr){
				cout<<"List is Empty"<<endl;
				return;
			}
			if(First->Data == d){
				First = First->Next;
				cout<<"Node Is Deleted"<<endl;
				    if(First == nullptr){
				        Last = nullptr;
			            cout<<"There is only one Node"<<endl;
			        }
			    return;
			}
			Node *Prev = new Node();
			Node *Curr = new Node();
			Curr = First;
			while(Curr != nullptr && Curr->Data != d){
				Prev = Curr;
				Curr = Curr->Next;
			}
			if(Curr == nullptr){
				cout<<"Item Not Found"<<endl;
				return;
			}
			if(Curr == Last){
				Last = Prev;
				Last->Next = nullptr;
				cout<<"Last Node is Deleted"<<endl;
				return;
			}
			if(Curr->Data == d){
				Prev->Next = Curr->Next;
				Curr = nullptr;
				cout<<"Node is Delete From SomeWhere in Mid"<<endl;
			}
		}
		
};
int main(){
	List mylist;
	mylist.Additem(12);
	mylist.Additem(22);
	mylist.Additem(32);
	mylist.Additem(42);
	cout<<"List is : ";
	mylist.Show();
	cout<<endl;
	mylist.Delete(90);
	mylist.Delete(12);
	cout<<"\nThe Updated List is :";
	mylist.Show();
}