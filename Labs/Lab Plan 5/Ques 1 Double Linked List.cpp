#include<iostream>
using namespace std;
class dblNode{
	public:
		int Data;
		dblNode *Prev;
		dblNode *Next;
		dblNode(){
			Data = 0;
			Prev = nullptr;
			Next = nullptr;
		}
};
class List{
	public:
		dblNode *First;
		dblNode *Last;
		List(){
			First = nullptr;
			Last = nullptr;
		}
		void insert(int d){
			dblNode *temp = new dblNode();
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
		void showfrwd(){
			dblNode *Curr = new dblNode();
			Curr = First;
			while(Curr != nullptr){
				cout<<Curr->Data<<"\t";
				Curr = Curr->Next;
			}
		}
		void showbrwd(){
			dblNode *Curr = new dblNode();
			Curr = Last;
			while(Curr != nullptr){
				cout<<Curr->Data<<"\t";
				Curr = Curr->Prev;
			}
		}
		void del(int d){
			if(First == nullptr){
				cout<<"\nList is Empty"<<endl;
				return;
			}
			if(First->Data == d){
				First = First->Next;
				cout<<"\nFirst Node is Deleted"<<endl;
				if(First == nullptr){
					Last = nullptr;
					cout<<"\nThis is also a Last Node"<<endl;
				}else{
					First->Prev = nullptr;
				}
				return;
			}
			dblNode *Curr = new dblNode();
			dblNode *Follow = new dblNode();
			Curr = First;
			while(Curr != nullptr && Curr->Data != d){
				Follow = Curr;
				Curr = Curr->Next;
			}
			if(Curr == nullptr){
				cout<<"\nItem Not Found"<<endl;
				return;
			}
			if(Curr == Last){
				Last = Follow;
				Last->Next = nullptr;
				cout<<"\nLast Node is Deleted"<<endl;
				return;
			}
			if(Curr->Data == d){
				Follow->Next = Curr->Next;
				Curr = Curr->Next;
				Curr->Prev = Follow;
				cout<<"\nNode Deleted Between"<<endl;
				return;
			}
		}
};