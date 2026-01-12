#include<iostream>
#include<queue>
using namespace std;
int main() {
	priority_queue<int> maxHeap;
	maxHeap.push(3);
	maxHeap.push(1);
	maxHeap.push(2);
	maxHeap.push(6);
	maxHeap.push(7);
	cout<<"Max Heap:\n";
	while(!maxHeap.empty()) {
		cout<<maxHeap.top()<<" ";
		maxHeap.pop();
	}
}
