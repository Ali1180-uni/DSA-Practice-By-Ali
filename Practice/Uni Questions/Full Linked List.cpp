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
			First = nullptr;
			Last = nullptr;
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
			}
		}
		void show() {
			if(First == nullptr) {
				cout<<"List is Empty"<<endl;
				return;
			} else {
				Node *temp = new Node();
				temp = First;
				while(temp!=nullptr) {
					cout<<temp->Data<<"\t";
					temp = temp->Next;
				}
			}
		}
		void Delete(int d) {
			if(First == nullptr) {
				cout<<"List is Empty"<<endl;
				return;
			}
			if(First->Data == d) {
				First = First->Next;
				cout<<"Node is Deleted"<<endl;
				if(First == nullptr) {
					Last = nullptr;
					cout<<"This is the only Node"<<endl;
				}
				return;
			}
			Node *Prev = new Node();
			Node *Curr = new Node();
			Curr = First;
			while(Curr != nullptr && Curr->Data != d) {
				Prev = Curr;
				Curr = Curr->Next;
			}
			if(Curr == nullptr) {
				cout<<"Item not Found"<<endl;
				return;
			}
			if(Curr == Last) {
				Last = Prev;
				Last->Next = nullptr;
				cout<<"Last Item is Deleted"<<endl;
				return;
			}
			if(Curr->Data == Last->Data) {
				Last = Prev;
				Curr = nullptr;
			}
			if(Curr->Data == d) {
				cout<<"Item Found Somewhere is Mid."<<endl;
				Prev->Next = Curr->Next;
				Curr = nullptr;
			}
		}
		void sort() {
			if (First == nullptr) {
				cout << "List is Empty" << endl;
				return;
			}

			Node* Curr = First;
			while (Curr != nullptr) {
				Node* Nex = Curr->Next;
				while (Nex != nullptr) {
					if (Curr->Data > Nex->Data) {
						int temp = Curr->Data;
						Curr->Data = Nex->Data;
						Nex->Data = temp;
					}
					Nex = Nex->Next;
				}
				Curr = Curr->Next;
			}
		}

};
int main() {
	List mylist;
	mylist.add(6);
	mylist.add(2);
	mylist.add(1);
	mylist.add(3);
	mylist.add(4);
	mylist.add(5);
	cout<<"List is : ";
	mylist.show();
	cout<<endl;
//	mylist.Delete(90);
//	mylist.Delete(15);
	cout<<"\nThe Updated List is : ";
	mylist.sort();
	mylist.show();
}