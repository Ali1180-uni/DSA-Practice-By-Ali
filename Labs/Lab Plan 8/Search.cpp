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
		bool Search(int num){
			Node *curr = root;
			if(root->data == num){
				return true;
			}
			while(curr!=nullptr && curr->data != num){
				if(num>curr->data){
					curr = curr->right;
				}else{
					curr = curr->left;
				}
			}
			if(curr == nullptr){
				return false;
			}else{
				return true;
			}
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
	cout<<"\n--------In Order--------\n";
	tree1.inorder(tree1.root);
	int n;
	cout<<"\nEnter Number to Search"<<endl;
	cin>>n;
	bool check = tree1.Search(n);
	if(check == true){
		cout<<n<<" Found"<<endl;
	}else{
		cout<<n<<" Not Found"<<endl;
	}

}