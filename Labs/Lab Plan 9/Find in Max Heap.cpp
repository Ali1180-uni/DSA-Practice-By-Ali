#include<iostream>
#include<queue>
using namespace std;
int main(){
	priority_queue<int> maxHeap;
	maxHeap.push(3);
	maxHeap.push(1);
	maxHeap.push(2);
	maxHeap.push(6);
	maxHeap.push(7);
	
	cout<<"Enter Number You want to Search:"<<endl;
	int num;
	cin>>num;
	
	vector<int> temp;
	bool check = false;
	
	while(!maxHeap.empty()){
		int x = maxHeap.top();
		maxHeap.pop();
		if(x!=num){
			temp.push_back(x);
		}else{
			check = true;
		}
	}
	
	cout << endl << (check ? "Found & Deleted" : "Number not Present") << endl;
	
	
	cout<<"Max Heap:\n";
	while(!maxHeap.empty()){
		cout<<maxHeap.top()<<" ";
		maxHeap.pop();
	}
	
}
