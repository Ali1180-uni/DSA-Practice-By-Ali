#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node *Next,*Prev;
		Node(){
			data = 0;
			Next = Prev = nullptr;
		}
};
Node *CirDbl(int n){
	if(n<=0){
		cout<<"Invalid"<<endl;
		return nullptr;
	}
	Node *First = new Node();
	First->data = 1;
	Node *Last = First;
	for(int i = 2; i<n; i++){
		Node *temp = new Node();
		temp->data = i;
		Last->Next = temp;
		temp->Prev = Last;
		Last = temp;
	}
	Last->Next = First;
	First->Prev = Last;
	return First;
}
int josephus(int n, int k){
	Node *Head = CirDbl(n);
	Node *Curr;
	while(Head->Next != Head){
		for(int i = 1; i<=k; i++){
			Curr = Head;
			Head = Head->Next;
		}
		Curr->Next = Head->Next;
		Head = Head->Next;
	}
	int win = Head->data;
	return win;
}

int main(){
	int winner = josephus(6,3);
	cout<<"The King :"<<winner;
}