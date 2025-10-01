#include<iostream>
using namespace std;
class Node{
	public:
		int Data;
		Node *Prev,*Next;
		Node(){
			Data = 0;
			Prev = Next = nullptr;
		}
};
class DblList{
	public:
		Node *First,*Last;
		DblList(){
			First = Last = nullptr;
		}
		void Add(int d){
			Node *temp = new Node();
			temp->Data = d;
			if(First == nullptr){
				First = temp;
				Last = temp;
			}else{
				Last->Next = temp;
				temp->Prev = Last;
				Last = temp;
			}
		}
		void FwrdShow(){
			if(First == nullptr){
				cout<<"List is Empty"<<endl;
				return;
			}
			Node *temp = new Node();
			temp = First;
			while(temp != nullptr){
				cout<<temp->Data<<"\t";
				temp = temp->Next;
			}
		}
		void BkwrdShow(){
			if(First == nullptr){
				cout<<"List is Empty"<<endl;
				return;
			}
			Node *temp = new Node();
			temp = Last;
			while(temp != nullptr){
				cout<<temp->Data<<"\t";
				temp = temp->Prev;
			}
		}
		void Delete(int d){
			if(First == nullptr){
				cout<<"List is Empty"<<endl;
				return;
			}
			if(First->Data == d){
				First = First->Next;
				cout<<"First Node is Deleted"<<endl;
				    if(First == nullptr){
				    	Last = nullptr;
					    cout<<"This is the First & Last Node"<<endl;
				    }
				return;
			}
			Node *Curr = new Node();
			Node *Follow = new Node();
			Curr = First;
			while(Curr != nullptr && Curr->Data != d){
			    Follow = Curr;
				Curr = Curr->Next;
			}
			if(Curr == nullptr){
				cout<<"Item not Found"<<endl;
				return;
			}
			if(Curr == Last){
				Last = Follow;
				Last->Next = nullptr;
				Curr->Prev = nullptr;
				cout<<"Last Node is Deleted"<<endl;
				return;
			}
			if(Curr->Data == d){	
				Follow->Next = Curr->Next;
				Curr->Next->Prev = Follow;
				Curr = nullptr;
			}
		}
};
int main(){
	DblList mydbllist;
	mydbllist.Add(12);
	mydbllist.Add(22);
	mydbllist.Add(32);
	mydbllist.Add(42);
	mydbllist.Delete(32);
	cout<<"The Forward List is: ";
	mydbllist.FwrdShow();
	cout<<"\nThe Backward List is: ";
	mydbllist.BkwrdShow();
}