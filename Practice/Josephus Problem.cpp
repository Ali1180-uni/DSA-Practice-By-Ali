#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node *Prev;
		Node *Next;
		Node(){
			data = 0;
			Prev = Next = nullptr;
		}
}
Node *CirDbl(int n){
	Node *First = new Node();
	First->data = 1;
	Node *Last = First;
	Node *Curr = First;
	for(int i = 2; i<=n; i++){
		Node *temp = new Node();
		temp->data = i;
		Last->Next = temp;
		Last = temp;
		Last->Prev = Curr;
		Curr = Curr->Next;
	}
	Last->Next = First;
	return First;
}
int main(){
	
}