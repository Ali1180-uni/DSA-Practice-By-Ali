#include<iostream>
using namespace std;
class Node {
	public:
		int data;
		Node *Next;
		Node() {
			data = 0;
			Next = nullptr;
		}
};
class List {
	private:
		Node *First,*Last;
	public:
		List(){
			First = nullptr;
			Last = nullptr;
		}
		void Add(int d) {
			Node *temp = new Node();
			temp->data = d;
			if(First == nullptr) {
				First = temp;
				Last = temp;
			} else {
				Last->Next = temp;
				Last = temp;
			}
		}
		void show() {
			if(First == nullptr) {
				cout<<"\nList is Empty"<<endl;
				return;
			} else {
				Node *Curr = new Node();
				Curr = First;
				while(Curr != nullptr) {
					cout<<Curr->data<<"\t";
					Curr = Curr->Next;
				}
				delete Curr;
			}
		}
		void Delete(int d) {
			if(First == nullptr) {
				cout<<"\nList is Empty"<<endl;
				return;
			}
			Node *Curr = new Node();
			Node *Prev = new Node();
			Curr = First;
			while(Curr != nullptr && Curr->data != d) {
				Prev = Curr;
				Curr = Curr->Next;
			}
			if(Curr->data != d) {
				cout<<"\nItem not Found"<<endl;
				return;
			}
			if(Curr == Last) {
				Last = Prev;
				Curr = nullptr;
				cout<<"\nLast Node is Deleted"<<endl;
				return;
			}
			if(Curr->data == d) {
				Curr = Curr->Next;
				Prev->Next = Curr;
				cout<<"\nThe Deleted Node is Somewhere Between"<<endl;
				return;
			}
		}
		void AddBtwn(int num1) {
			if(First == nullptr) {
				cout<<"\nThe List is Empty"<<endl;
				return;
			}
			cout<<"\nEnter the number After which You Add this Number"<<endl;
			int num;
			cin>>num;
			Node *Curr = new Node();
			Node *temp = new Node();
			Curr = First;
			while(Curr != nullptr && Curr->data != num) {
				Curr = Curr->Next;
			}
			if(Curr->data != num) {
				cout<<"\nThis Number is Not Present in this List"<<endl;
				return;
			}
			if(Curr == Last) {
				temp->data = num1;
				Last->Next = temp;
				Last = temp;
				Last->Next = nullptr;
				cout<<"\nData is Added at the Last of List"<<endl;
				return;
			}
			if(Curr->data == num) {
				temp->data = num1;
				temp->Next = Curr->Next;
				Curr->Next = temp;
				cout<<"\nNode Added Between"<<endl;
				return;
			}
		}
};