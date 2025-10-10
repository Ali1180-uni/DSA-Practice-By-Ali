#include<iostream>
using namespace std;
class Node{
	private:
		int Data;
		Node *Next;
	public:
		void SetData(int d){
			Data = d;
		}
		void SetNext(Node *n){
			Next = n;
		}
		int getData(){
			return Data;
		}
		Node *getNext(){
			return Next;
		}
};
int main(){
	Node n1,n2;
	n1.SetData(12);
	n2.SetData(22);
	n1.SetNext(&n2);
	cout<<"The Data of First is : "<<n1.getData()<<"\nThe Data of Next is: "<<n2.getData()<<endl;
}