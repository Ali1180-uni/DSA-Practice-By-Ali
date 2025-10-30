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
		void Additem(int d) {
			Node *temp = new Node();
			temp->Data = d;
			if(First == nullptr) {
				First = temp;
				Last = temp;
				Last->Next = First;
			} else {
				Last->Next = temp;
				Last = temp;
				Last->Next = First;
			}
		}
		void Delete(int d) {
			if(First == nullptr) {
				cout<<"List is Empty"<<endl;
				return;
			}
			if(First->Data == d) {
				First = First->Next;
				Last->Next = First;
				if(First == Last) {
					cout<<"This is also the last node"<<endl;
					delete First;
					First = nullptr;
					Last = nullptr;
					return;
				}
				return;
			}
			Node *Curr,*Prev;
			Curr = First;
			do {
				Prev = Curr;
				Curr = Curr->Next;
			} while(Curr->Next != First && Curr->Data != d);
			if(Curr->Data != d) {
				cout<<"Invalid Entry, Data Not Found"<<endl;
				return;
			}
			if(Curr == Last) {
				Last = Prev;
				Last->Next = First;
				Curr = nullptr;
				cout<<"Last Node is Deleted"<<endl;
				return;
			}
			if(Curr->Data == d) {
				Curr = Curr->Next;
				Prev->Next = Curr;
				cout<<"Node in Between is deleted";
				return;
			}
		}
		void Show() {
			if(First == nullptr) {
				cout<<"List is Empty"<<endl;
				return;
			}
			Node *temp = First;
			do {
				cout<<temp->Data<<"\t";
				temp = temp->Next;
			} while(temp != First);
			return;
		}
};
int main() {
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


//Single List
//class List {
//	public:
//		Node *First,*Last;
//		List() {
//			First = Last = nullptr;
//		}
//		void Additem(int d) {
//			Node *temp = new Node();
//			temp->Data = d;
//			if(First == nullptr) {
//				First = temp;
//				Last = temp;
//			} else {
//				Last->Next = temp;
//				Last = temp;
//			}
//		}
//		void Delete(int d) {
//			if(First == nullptr) {
//				cout<<"List is Empty"<<endl;
//				return;
//			}
//			if(First->Data == d) {
//				First = First->Next;
//				if(First == nullptr) {
//					cout<<"This is also the last node"<<endl;
//					Last = nullptr;
//				}
//				return;
//			}
//			Node *Curr = new Node();
//			Node *Prev = new Node();
//			Curr = First;
//			while(Curr != nullptr && Curr->Data != d) {
//				Prev = Curr;
//				Curr = Curr->Next;
//			}
//			if(Curr == nullptr) {
//				cout<<"Invalid Entry, Data Not Found"<<endl;
//				return;
//			}
//			if(Curr == Last) {
//				Last = Prev;
//				Curr = nullptr;
//				cout<<"Last Node is Deleted"<<endl;
//				return;
//			}
//			if(Curr->Data == d) {
//				Curr = Curr->Next;
//				Prev->Next = Curr;
//				cout<<"Node in Between is deleted";
//				return;
//			}
//		}
//		void Show() {
//			if(First == nullptr){
//				cout<<"List is Empty"<<endl;
//				return;
//			}
//			Node *temp = new Node();
//			temp = First;
//			while(temp != nullptr) {
//				cout<<temp->Data<<"\t";
//				temp = temp->Next;
//			}
//		}
//};

//Double Linked List
//class List {
//	public:
//		Node *First,*Last;
//		List() {
//			First = Last = nullptr;
//		}
//		void Additem(int d) {
//			Node *temp = new Node();
//			temp->Data = d;
//			if(First == nullptr) {
//				First = temp;
//				Last = temp;
//			} else {
//				Last->Next = temp;
//				temp->Prev = Last;
//				Last = temp;
//			}
//		}
//		void Delete(int d) {
//			if(First == nullptr) {
//				cout<<"List is Empty"<<endl;
//				return;
//			}
//			if(First->Data == d) {
//				First = First->Next;
//				First->Prev = nullptr;
//				if(First == nullptr) {
//					cout<<"This is also the last node"<<endl;
//					Last = nullptr;
//				}
//				return;
//			}
//			Node *Curr = new Node();
//			Node *Preve = new Node();
//			Curr = First;
//			while(Curr != nullptr && Curr->Data != d) {
//				Preve = Curr;
//				Curr = Curr->Next;
//			}
//			if(Curr == nullptr) {
//				cout<<"Invalid Entry, Data Not Found"<<endl;
//				return;
//			}
//			if(Curr == Last) {
//				Last = Preve;
//				Curr = nullptr;
//				cout<<"Last Node is Deleted"<<endl;
//				return;
//			}
//			if(Curr->Data == d) {
//				Curr = Curr->Next;
//				Curr->Prev = Preve;
//				Preve->Next = Curr;
//				cout<<"Node in Between is deleted";
//				return;
//			}
//		}
//		void fwrdShow() {
//			if(First == nullptr) {
//				cout<<"List is Empty"<<endl;
//				return;
//			}
//			Node *temp = new Node();
//			temp = First;
//			while(temp != nullptr) {
//				cout<<temp->Data<<"\t";
//				temp = temp->Next;
//			}
//		}
//		void bkwrdShow() {
//			if(First == nullptr) {
//				cout<<"List is Empty"<<endl;
//				return;
//			}
//			Node *temp = new Node();
//			temp = Last;
//			while(temp != nullptr) {
//				cout<<temp->Data<<"\t";
//				temp = temp->Prev;
//			}
//		}
//};

//Circular List
//class List {
//	public:
//		Node *First,*Last;
//		List() {
//			First = Last = nullptr;
//		}
//		void Additem(int d) {
//			Node *temp = new Node();
//			temp->Data = d;
//			if(First == nullptr) {
//				First = temp;
//				Last = temp;
//				Last->Next = First;
//			} else {
//				Last->Next = temp;
//				Last = temp;
//				Last->Next = First;
//			}
//		}
//		void Delete(int d) {
//			if(First == nullptr) {
//				cout<<"List is Empty"<<endl;
//				return;
//			}
//			if(First->Data == d) {
//				First = First->Next;
//				Last->Next = First;
//				if(First == Last) {
//					cout<<"This is also the last node"<<endl;
//					delete First;
//					First = nullptr;
//					Last = nullptr;
//					return;
//				}
//				return;
//			}
//			Node *Curr,*Prev;
//			Curr = First;
//			do {
//				Prev = Curr;
//				Curr = Curr->Next;
//			} while(Curr->Next != First && Curr->Data != d);
//			if(Curr->Data != d) {
//				cout<<"Invalid Entry, Data Not Found"<<endl;
//				return;
//			}
//			if(Curr == Last) {
//				Last = Prev;
//				Last->Next = First;
//				Curr = nullptr;
//				cout<<"Last Node is Deleted"<<endl;
//				return;
//			}
//			if(Curr->Data == d) {
//				Curr = Curr->Next;
//				Prev->Next = Curr;
//				cout<<"Node in Between is deleted";
//				return;
//			}
//		}
//		void Show() {
//			if(First == nullptr) {
//				cout<<"List is Empty"<<endl;
//				return;
//			}
//			Node *temp = First;
//			do {
//				cout<<temp->Data<<"\t";
//				temp = temp->Next;
//			} while(temp != First);
//			return;
//		}
//};