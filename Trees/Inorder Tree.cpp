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
		void InOrder(Node *temp) {
			if(temp == nullptr) {
				return;
			}
			InOrder(temp->left);
			cout<<temp->data<<" ";
			InOrder(temp->right);
		}
};
int main() {
	binarySearchTree tree1;
	tree1.insert(14);
	tree1.insert(13);
	tree1.insert(16);
	tree1.insert(20);
	tree1.insert(18);
	cout<<"\n--------In Order--------\n";
	tree1.InOrder(tree1.root);
}