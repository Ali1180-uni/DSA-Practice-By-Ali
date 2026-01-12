#include<iostream>
#include<queue>
using namespace std;
int main() {
	priority_queue<int, vector<int>, greater<int>> minHeap;
//	minHeap.push(3);
//	minHeap.push(1);
//	minHeap.push(2);
//	minHeap.push(6);
//	minHeap.push(7);

int nums;
int i = 1;
while(i!=13){
	cout<<"Enter Number: "<<endl;
	cin>>nums;
	minHeap.push(nums);
	system("cls");
	i++;
}

//
//	cout<<"Enter Number You want to Delete:"<<endl;
//	int num;
//	cin>>num;
//
//	vector<int> temp;
//	bool check = false;
//
//	while(!minHeap.empty()) {
//		int x = minHeap.top();
//		minHeap.pop();
//		if(x!=num) {
//			temp.push_back(x);
//		} else {
//			check = true;
//		}
//	}
//
//	cout << endl << (check ? "Found & Deleted" : "Number not Present") << endl;
//
//	for(int x : temp) {
//		minHeap.push(x);
//	}

	cout<<"\nMin Heap:\n";
	while(!minHeap.empty()) {
		cout<<minHeap.top()<<" ";
		minHeap.pop();
	}
}
