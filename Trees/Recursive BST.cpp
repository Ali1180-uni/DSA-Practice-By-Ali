#include<iostream>
using namespace std;

class Node {
	public:
		int data;
		Node *left, *right;
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
					if(d > curr->data) {
						curr = curr->right;
					} else {
						curr = curr->left;
					}
				}
				if(d > parent->data) {
					parent->right = temp;
				} else {
					parent->left = temp;
				}
			}
		}

		// --- NEW RECURSIVE LOGIC STARTS HERE ---

		// Helper function to find the smallest value in a subtree
		// We need this for Case 3 (Two Children) to find the Inorder Successor
		Node* minValueNode(Node* node) {
			Node* current = node;
			while (current && current->left != nullptr)
				current = current->left;
			return current;
		}

		// The recursive worker function
		// Returns: The new root of the subtree after deletion
		Node* deleteRecursive(Node* root, int d) {
			// Base Case: If the tree is empty or value not found
			if (root == nullptr) {
				return root;
			}

			// Step 1: SEARCH for the node
			if (d < root->data) {
				root->left = deleteRecursive(root->left, d);
			}
			else if (d > root->data) {
				root->right = deleteRecursive(root->right, d);
			}
			else {
				// We found the node (root->data == d)! 
				// Now we handle the 3 Cases:

				// Case 1 & 2: Node has NO child (Leaf) OR ONE child
				if (root->left == nullptr) {
					Node* temp = root->right; // Save the right child (could be null)
					delete root;              // Delete current node
					return temp;              // Return the child to the parent
				}
				else if (root->right == nullptr) {
					Node* temp = root->left;  // Save the left child
					delete root;              // Delete current node
					return temp;              // Return the child to the parent
				}

				// Case 3: Node has TWO children
				// Strategy: Find Inorder Successor (smallest in the right subtree)
				Node* temp = minValueNode(root->right);

				// Copy the successor's data to this node
				root->data = temp->data;

				// Recursively delete the successor from the right subtree
				// (The successor effectively moves up, so we delete its old duplicate)
				root->right = deleteRecursive(root->right, temp->data);
			}
			return root;
		}

		// Public wrapper function
		void Delete(int d) {
			// We update the main root with whatever the recursion returns
			root = deleteRecursive(root, d);
		}

		// --- END RECURSIVE LOGIC ---

		void InOrder(Node *temp) {
			if(temp == nullptr) {
				return;
			}
			InOrder(temp->left);
			cout << temp->data << " ";
			InOrder(temp->right);
		}

		void PostOrder(Node *temp) {
			if(temp == nullptr) {
				return;
			}
			PostOrder(temp->left);
			PostOrder(temp->right);
			cout << temp->data << " ";
		}

		void PreOrder(Node *temp) {
			if(temp == nullptr) {
				return;
			}
			cout << temp->data << " ";
			PreOrder(temp->left);
			PreOrder(temp->right);
		}
};

int main() {
	binarySearchTree tree1;
	
	// Inserting data
	tree1.insert(14);
	tree1.insert(13);
	tree1.insert(16);
	tree1.insert(20);
	tree1.insert(18); // This will be the successor if we delete 16
	tree1.insert(15);
	
	cout << "Original Tree (InOrder): ";
	tree1.InOrder(tree1.root);
	cout << endl;

	cout << "\nDeleting 14 (Root with 2 children)..." << endl;
	tree1.Delete(14);
	
	cout << "--------In Order--------\n";
	tree1.InOrder(tree1.root);
	cout << "\n--------Pre Order--------\n";
	tree1.PreOrder(tree1.root);
	cout << "\n--------Post Order--------\n";
	tree1.PostOrder(tree1.root);
	cout << endl;
}