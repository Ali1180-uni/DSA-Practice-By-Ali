#include<iostream>
using namespace std;
class Node {
	public:
		int Data;
		Node *Next,*prev;
		Node() {
			Data = 0;
			Next = nullptr;
			prev = nullptr;
		}
};
class CircList {
	public:
		Node *First,*Last;
		CircList() {
			First = nullptr;
			Last = nullptr;
		}
		void Add(int d) {
			Node *temp = new Node();
			temp->Data = d;
			if(First == nullptr) {
				First = temp;
				Last = temp;
				First->Next = First;
				First->prev = First;
			} else {
				temp->prev = Last;
				Last->Next = temp;
				Last = temp;
				Last->Next = First;
				First->prev = Last;
			}
		}
		void ShowFwrd() {
			if(First == nullptr) {
				cout<<"\nList is Empty"<<endl;
				return;
			}
			Node *Curr;
			Curr = First;
			do {
				cout<<Curr->Data<<"\t";
				Curr = Curr->Next;
			} while(Curr != First); // We Use it bcz in do-while we make it next thats why its always not equal to First until list is completed
			return;
		}
		void ShowBkwrd() {
			if(First == nullptr) {
				cout<<"\nList is Empty"<<endl;
				return;
			}
			Node *Curr;
			Curr = Last;
			do {
				cout<<Curr->Data<<"\t";
				Curr = Curr->prev;
			} while(Curr != Last); // We Use it bcz in do-while we make it next thats why its always not equal to First until list is completed
			return;
		}
		void Delete(int d) {
			if(First == nullptr) {
				cout<<"\nList is Empty"<<endl;
				return;
			}
			if(First->Data == d) {
				First = First->Next;
				Last->Next = First;
				cout<<"\nFirst Node is Deleted"<<endl;
				if(First == Last) {
					cout<<"\nThis is the Last Node also"<<endl;
					delete First;
					Last = nullptr;
					First = nullptr;
					return;
				}
				return;
			}
			Node *Curr,*Prev;
			Curr = First;
			do {
				Prev = Curr;
				Curr = Curr->Next;
			} while(Curr != First && Curr->Data != d);
			if(Curr->Data != d) {
				cout<<"\nItem Not Found"<<endl;
				return;
			}
			if(Curr == Last) {
				Last = Prev;
				Last->Next = First;
				First->prev = Last;
				cout<<"\nLast Node is Deleted"<<endl;
				return;
			}
			if(Curr->Data == d) {
				Prev->Next = Curr->Next;
				Curr = Curr->Next;
				Curr->prev = Prev;
				cout<<"\nDeleted Node is Somewhere in Middle"<<endl;
				return;
			}
		}

};
int main() {
	CircList mylist;
	mylist.Add(12);
	mylist.Add(22);
	mylist.Add(32);
	mylist.Add(42);
	cout<<"Forward: "<<endl;
	mylist.ShowFwrd();
	cout<<"\nBackward: "<<endl;
	mylist.ShowBkwrd();
	mylist.Delete(42);
	mylist.Delete(22);
//	mylist.Delete(32);
	mylist.ShowFwrd();
}