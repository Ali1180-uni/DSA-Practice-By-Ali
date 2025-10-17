#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node *Next;
		Node(){
			data = 0;
			Next = nullptr;
		}
};
Node *Circular(int num){
	if(num<=0){
		cout<<"Invalid"<<endl;
		return nullptr;
	}
	Node *First = new Node();
	First->data = 1;
	Node *Last = First;
	for(int i = 2; i<num; i++){
		Node *temp = new Node();
		temp->data = i;
		Last->Next = temp;
		Last = temp;
	}
	Last->Next = First;
	return First;
}
int joseph(int n, int k){
	Node *Head = Circular(n);
	Node *Curr;
	while(Head->Next != Head){
		for(int i = 1; i<=k; i++){
			Curr = Head;
			Head = Head->Next;
		}
		Curr->Next = Head->Next;
		Head = Head->Next;
	}
	int winner = Head->data;
	return winner;
//	delete Head;
}
int main(){
	int winner = joseph(6,3);
	cout<<"Winner is : "<<winner<<endl;
}