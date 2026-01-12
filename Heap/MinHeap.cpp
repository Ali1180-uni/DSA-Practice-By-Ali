#include<iostream>
#include<queue>
using namespace std;
int main(){
	priority_queue<int, vector<int>, greater<int>> minHeap;
	minHeap.push(3);
	minHeap.push(1);
	minHeap.push(2);
	minHeap.push(6);
	minHeap.push(7);
	cout<<"\nMin Heap:\n";
	while(!minHeap.empty()){
		cout<<minHeap.top()<<" ";
		minHeap.pop();
	}
}
