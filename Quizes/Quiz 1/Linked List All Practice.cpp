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
		void add(int d){
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
		void show(){
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
		void Delete(int d){
			if(First == nullptr){
				cout<<"The List is Empty: "<<endl;
				return;
			}
			if(First->Data == d){
				First = First->Next;
				cout<<"First Node is Deleted"<<endl;
				if(First == nullptr){
					Last == nullptr;
					cout<<"This is The last Node also"<<endl;
				}
				return;
			}
			Node *Curr = new Node();
			Node *Prev = new Node();
			Curr = First;
			while(Curr != nullptr && Curr->Data != d){
				Prev = Curr;
				Curr = Curr->Next;
			}
			if(Curr->Data != d){
				cout<<"The Item not Exist in this List"<<endl;
				return;
			}
			if(Curr == Last){
				cout<<"Last Node is Deleted"<<endl;
				Last = Prev;
				Last->Next = nullptr;
				return;
			}
			if(Curr->Data == d){
				cout<<"Node is Deleted From Middle"<<endl;
				Curr = Curr->Next;
				Prev->Next = Curr;
				return;
			}
			delete Curr,Prev;
		}
		void sort(){
			if(First == nullptr){
				cout<<"The List is Empty: "<<endl;
				return;
			}
			Node *Curr = new Node();
			Curr = First;
			while(Curr != nullptr){
				Node *For = new Node();
				For = Curr->Next;
				while(For != nullptr){
					if(Curr->Data > For->Data){
						swap(Curr->Data,For->Data);
					}
					For = For->Next;
				}
				Curr = Curr->Next;
			}
		}
		void MinMax(){
		    if(First == nullptr){
				cout<<"The List is Empty: "<<endl;
				return;
			}
			int min = INT_MIN;
			int max = INT_MAX;
			Node *Curr = new Node();
			Curr = First;
			while(Curr != nullptr){
				if(Curr->Data > min){
					min = Curr->Data;
				}
				if(Curr->Data < max){
					max = Curr->Data;
				}
				Curr = Curr->Next; 
			}
			cout<<"\nThe Largest Number in List is: "<<min<<endl;
			cout<<"The Smallest Number in List is: "<<max<<endl;
			delete Curr;
		}
		void search(int d){
			if(First == nullptr){
				cout<<"The List is Empty: "<<endl;
				return;
			}
			int num = 1;
			int count = 0;
			Node *Curr = First;
			while(Curr != nullptr){
				if(Curr->Data == d){
					count++;
					cout<<"\nThe Number is Present at "<<num<<"th Node"<<endl;
				}
				num++;
				Curr = Curr->Next;
			}
			if(count == 0){
				cout<<"\nItem is not Present in the List"<<endl;
				return;
			}else{
				cout<<"\nThe Number in List "<<count<<" times"<<endl;
			}
		}
};
int main(){
	List mylist;
	mylist.add(12);
	mylist.add(2);
	mylist.add(42);
	mylist.add(5);
	mylist.add(5);
	mylist.add(51);
//	mylist.Delete(42);
//	mylist.Delete(12);
//	mylist.Delete(52);
    cout<<"Simple List: "<<endl;
    mylist.show();
    cout<<endl;
    mylist.search(5);
    mylist.sort();
    cout<<"\nSorted List: "<<endl;
	mylist.show();
	cout<<endl;
	mylist.MinMax();
	cout<<endl;
}