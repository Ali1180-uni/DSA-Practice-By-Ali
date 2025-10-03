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
Node *CreateCircular(int n){
	Node *First = new Node();
	Node *Last = new Node();
	First->Data = 1;
	First = Last;
	
}
int main(){
	
}