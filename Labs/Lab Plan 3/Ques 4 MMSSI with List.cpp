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
					while(Prev != nullptr) {
						if(Curr->Data > Prev->Data) {
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
		void Addbtw(int num) {
			if(First == nullptr) {
				cout<<"The List is Empty"<<endl;
				return;
			}
			Node *temp = new Node();
			temp->Data = num;
			cout<<"\nPlease Enter the Number after which you want to Add new Number:"<<endl;
			int newNum;
			cin>>newNum;
			Node *Curr = new Node();
			Curr = First;
			while(Curr != nullptr) {
				if(Curr->Data == newNum) {
					temp->Next = Curr->Next;
					Curr->Next = temp;
					if(Curr == Last) {
						Last = temp;
					}
					cout<<"\nNode Added between"<<endl;
					return;
				}
				Curr = Curr->Next;
			}
			cout<<"Item not Found in List"<<endl;
			return;
		}
		void Search(int d){
			int count = 0;
			int index = 0;
			Node *temp = new Node();
			Node *Curr = new Node();
			temp->Data = d;
			Curr = First;
			while(Curr != nullptr){
				if(Curr->Data == d){
					count++;
				}
				index++;
				Curr = Curr->Next;
			}
			if(index == 0){
				cout<<"Number is not in List"<<endl;
				return;
			}else{
				cout<<"\nYour Number is "<<count<<" times in this List"<<endl;
				cout<<"Its Position is "<<index-1<<" in List"<<endl;
			}
			delete temp,Curr;
		}
		void Swap(int num1,int num2){
			if(First == nullptr){
				cout<<"List is Empty"<<endl;
				return;
			}
			Node *Curr = new Node();
			Curr = First;
			while(Curr != nullptr){
				Node *Prev = new Node();
				Prev = Curr->Next;
				while(Prev != nullptr){
					if(Curr->Data == num1){
						if(Prev->Data == num2){
							int temp = Curr->Data;
							Curr->Data = Prev->Data;
							Prev->Data = temp;
						}
					}
					Prev = Prev->Next;
				}
				Curr = Curr->Next;
			}
			cout<<"\nAfter Swap"<<endl;
		}
};
int main() {
	List mylist;
	mylist.Add(12);
	mylist.Add(99);
	mylist.Add(14);
	mylist.Add(5);
	mylist.Add(2);
	mylist.Add(14);
	mylist.Show();
	mylist.MinMax();
	mylist.Sort();
	mylist.Show();
	mylist.Addbtw(23);
	mylist.Show();
	mylist.Search(2);
	mylist.Swap(14,99);
	mylist.Show();
}