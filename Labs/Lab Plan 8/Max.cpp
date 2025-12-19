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
class BST {
	public:
		Node *root;
		BST() {
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
				Node *prev;
				while(curr!=nullptr) {
					prev = curr;
					if(d>curr->data) {
						curr = curr->right;
					} else {
						curr = curr->left;
					}
				}
				if(d>prev->data) {
					prev->right = temp;
				} else {
					prev->left = temp;
				}
			}
		}
		void Max() {
			Node *curr = root;
			while(curr->right != nullptr) {
				curr = curr->right;
			}
			cout<<"\nLargest is: "<<curr->data<<endl;
		}
		void inorder(Node *temp) {
			if(temp == nullptr) {
				return;
			}
			inorder(temp->left);
			cout<<" "<<temp->data;
			inorder(temp->right);
		}
};
int main() {
	BST tree1;
	tree1.insert(14);
	tree1.insert(13);
	tree1.insert(16);
	tree1.insert(20);
	tree1.insert(18);
	tree1.Max();
	cout<<"\n--------In Order--------\n";
	tree1.inorder(tree1.root);

}