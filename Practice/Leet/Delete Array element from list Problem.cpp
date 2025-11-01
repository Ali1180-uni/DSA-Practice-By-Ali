#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
class node {
	public:
		int data;
		node *next;
		node() {
			data = 0;
			next = nullptr;
		}
		node(int x) {
			data = x;
			next = nullptr;
		}
		node(int x,node *Next) {
			data = x;
			next = Next;
		}
};
bool test(vector<int>& nums, int x){
	for(int i = 0; i<nums.size(); i++){
		if(nums[i] == x){
			return true;
		}else{
			return false;
		}
	}
}
node *modify(vector<int>& nums, node* head) {
	int n = nums.size();
	node *temp = new node(0);
	temp->next = head;
	
	node *prev = temp;
	node *curr = head;
	while(curr!=nullptr){
		if(test(nums,curr->data)){
			prev->next = curr->next;
		}else{
			prev = curr;
		}
		curr = curr->next;
	}
	node *dum = temp->next;
	while(dum!=nullptr) {
		cout<<dum->data<<" ";
		dum = dum->next;
	}
//	return dum;
}
int main() {
	vector<int> arr = {1,2,3};
	vector<int> arr1 = {1};
	vector<int> arr2 = {5};
	//one
//	node* first = new node(1);
//	node* second = new node(2);
//	node* third = new node(3);
//	node* four = new node(4);
//	node* five = new node(5);
	//two
	node* first = new node(1);
	node* second = new node(2);
	node* third = new node(1);
	node* four = new node(2);
	node* five = new node(1);
	//three
//	node* first = new node(1);
//	node* second = new node(2);
//	node* third = new node(3);
//	node* four = new node(4);
//	node* five = new node(5);

	first->next = second;
	second->next = third;
	third->next = four;
	four->next = five;
	modify(arr1,first);
}

