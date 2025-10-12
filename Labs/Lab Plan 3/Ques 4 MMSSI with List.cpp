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
		void Add(int d) {
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
		void Show() {
			if(First == nullptr) {
				cout<<"List is Empty: "<<endl;
				return;
			} else {
				Node *Curr = new Node();
				Curr = First;
				cout<<"\nThe List is: "<<endl;
				while(Curr != nullptr) {
					cout<<Curr->Data<<"\t";
					Curr = Curr->Next;
				}
			}
		}
		void MinMax() {
			if(First == nullptr) {
				cout<<"List is Empty: "<<endl;
				return;
			} else {
				int min = INT_MAX;
				int max = INT_MIN;
				Node *Curr = new Node();
				Curr = First;
				while(Curr!=nullptr) {
					if(Curr->Data > max) {
						max = Curr->Data;
					}
					if(Curr->Data < min) {
						min = Curr->Data;
					}
					Curr = Curr->Next;
				}
				cout<<"\n\n\nThe Maximum Number in List is: "<<max<<"\nThe Minimum Number in List is: "<<min<<endl;
				delete Curr;
			}
		}
		void Sort() {
			if(First == nullptr) {
				cout<<"List is Empty: "<<endl;
				return;
			} else {
				Node *Curr = new Node();
				Curr = First;
				while(Curr != nullptr) {
					Node *Prev = Curr->Next;
					while(Prev != nullptr){
						if(Curr->Data > Prev->Data){
							int temp = Curr->Data;
							Curr->Data = Prev->Data;
							Prev->Data = temp;
						}
						Prev = Prev->Next;
					}	
					Curr = Curr->Next;
				}
			}
			cout<<"\nAfter Sort";
		}
};
int main() {
	List mylist;
	mylist.Add(12);
	mylist.Add(99);
	mylist.Add(14);
	mylist.Add(5);
	mylist.Add(2);
	mylist.Show();
	mylist.MinMax();
	mylist.Sort();
	mylist.Show();
}