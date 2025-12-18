#include<iostream>
using namespace std;
class Node{
	private:
		int Data;
		Node *Next;
		Node *Prev;
	public:
		int GetData(){
			return Data;
		}
		void SetData(int d){
			Data = d;
		}
		Node *GetNext(){
			return Next;
		}
		void SetNext(Node *nxt){
			Next = nxt;
		}
		Node *GetPrev(){
			return Prev;
		}
		void SetPrev(Node *prev){
			Prev = prev;
		}
};
int main(){
	Node *n1 = new Node();
	Node *n2 = new Node();
	n1->SetData(12);
	n2->SetData(13);
	n1->SetPrev(nullptr);
	n1->SetNext(n2);
	n2->SetPrev(n1);
	n2->SetNext(nullptr);
	int num = n1->GetData();
	cout<<num;
	return 0;
}