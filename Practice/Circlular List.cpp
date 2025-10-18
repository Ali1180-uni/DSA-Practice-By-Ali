#include<iostream>
using namespace std;
class Node {
	public:
		int Data;
		Node *Next;
		Node() {
			Data = 0;
			Next = nullptr;
		}
};
class List {
	public:
		Node *First,*Last;
		List() {
			First = Last = nullptr;
		}
		void add(int d) {
			Node *temp = new Node();
			temp->Data = d;
			if(First == nullptr) {
				First = temp;
				Last = temp;
			} else {
				Last->Next = temp;
				Last = temp;
				Last->Next = First;
			}
		}
		void Show() {
			if(First == nullptr) {
				cout<<"List is Empty"<<endl;
				return;
			}
			Node *Curr = new Node();
			Curr = First;
			do {
				cout<<Curr->Data<<"\t";
				Curr = Curr->Next;
			} while(Curr != First);
		}
		void del(int d){
			if(First == nullptr){
				cout<<"\nList is Empty"<<endl;
				return;
			}
			if(First->Data == d){
				First = First->Next;
				cout<<"\nNode is Deleted"<<endl;
				if(First == nullptr){
					Last = nullptr;
					cout<<"\nLast Node also Deleted"<<endl;
				}
			}
			Node *Curr = new Node();
			Node *follow = new Node();
			Curr = First;
			do{
				follow = Curr;
				Curr = Curr->Next;
			}while(Curr != First && Curr->Data != d);
			if(Curr->Data != d){
				cout<<"\nitem not found"<<endl;
				return;
			}
			if(Curr == Last){
				Last = follow;
				Last->Next = First;
				return;
			}
			if(Curr->Data == d){
				follow->Next = Curr->Next;
				Curr = Curr->Next;
				return;
			}
		}
};
int main() {
	List mylist;
	mylist.add(12);
	mylist.add(22);
	mylist.add(32);
	mylist.add(42);
	cout<<"\nCircular list is :"<<endl;
	mylist.Show();
	mylist.del(32);
	cout<<"\nCircular list is :"<<endl;
	mylist.Show();
}