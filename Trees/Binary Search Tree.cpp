#include<iostream>
using namespace std;
class Node {
	public:
		int data;
		Node *left,*right;
		Node() {
			data = 0;
			left = right = nullptr;
		}
};
class binarySearchTree {
	public:
		Node *root;
		binarySearchTree() {
			root = nullptr;
		}
		void insert(int d) {
			Node *temp = new Node();
			temp->data = d;
			if(root == nullptr) {
				root = temp;
				return;
			} else {
				Node *curr = root;
				Node *parent;
				while(curr != nullptr) {
					parent = curr;
					if(d>curr->data) {
						curr = curr->right;
					} else {
						curr = curr->left;
					}
				}
				if(d>parent->data) {
					parent->right = temp;
				} else {
					parent->left = temp;
				}
			}
		}
		void Delete(int d) {
			if(root == nullptr) {
				cout<<"\nTree is Empty"<<endl;
				return;
			}
			Node *curr = root;
			Node *parent;
			while(curr != nullptr && curr->data != d) {
				parent  = curr;
				if(d>curr->data) {
					curr = curr->right;
				} else {
					curr = curr->left;
				}
			}
			if(curr== nullptr){
				cout<<"\nData Not Found"<<endl;
				return;
			}else if(curr->left == nullptr && curr->right == nullptr){
				if(curr == root){
					root = nullptr;
					return;
				}else if(curr == parent->left){
					parent->left = nullptr; 
				}else{
					parent->right = nullptr;
				}
			}else if(curr->right == nullptr){
				if(curr == root){
					root = curr->left;
					return;
				}else if(parent->left == curr){
					parent->left = curr->left;
				}else{
					parent->right = curr->left;
				}
				delete curr;
			}else if(curr->left == nullptr){
				if(curr == root){
					root = curr->right;
					return;
				}else if(parent->right == curr){
					parent->right = curr->right;
				}else{
					parent->left = curr->right;
				}
				delete curr;
			}else{
				Node *subsucc = curr;
				Node *succ = curr->right; // if we want to check in right side
				while(succ->left != nullptr){ // and the leftmost value in right side is smallest bcz we take small in right side and large in left side
					subsucc = succ;
					succ = succ->left;
				}
				curr->data = succ->data;
				if(subsucc->right == succ){
					subsucc->right = succ->right;
				}else{
					subsucc->left = succ->right;
				}
				delete succ;
			}
		}
		void InOrder(Node *temp) {
			if(temp == nullptr) {
				return;
			}
			InOrder(temp->left);
			cout<<temp->data<<" ";
			InOrder(temp->right);
		}
		void PostOrder(Node *temp) {
			if(temp == nullptr) {
				return;
			}
			PostOrder(temp->left);
			PostOrder(temp->right);
			cout<<temp->data<<" ";
		}
		void PreOrder(Node *temp) {
			if(temp == nullptr) {
				return;
			}
			cout<<temp->data<<" ";
			PreOrder(temp->left);
			PreOrder(temp->right);
		}
};
int main() {
	binarySearchTree tree1;
	tree1.insert(14);
	tree1.insert(13);
	tree1.insert(16);
	tree1.insert(20);
	tree1.insert(18);
	
	tree1.Delete(14);
	cout<<"\n--------In Order--------\n";
	tree1.InOrder(tree1.root);
	cout<<"\n--------Pre Order--------\n";
	tree1.PreOrder(tree1.root);
	cout<<"\n--------Post Order--------\n";
	tree1.PostOrder(tree1.root);
}