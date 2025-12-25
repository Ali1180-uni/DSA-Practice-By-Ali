#include<iostream>
using namespace std;
class Node {
	public:
		int data;
		Node *Next;
		Node() {
			data = 0;
			Next = nullptr;
		}
};
class List {
	private:
		Node *First,*Last;
	public:
		List() {
			First = nullptr;
			Last = nullptr;
		}
		void Add(int d) {
			Node *temp = new Node();
			temp->data = d;
			if(First == nullptr) {
				First = temp;
				Last = temp;
			} else {
				Last->Next = temp;
				Last = temp;
			}
		}
		void show() {
			if (First == nullptr) {
				cout << "\nList is Empty\n";
				return;
			}

			Node *Curr = First;
			while (Curr != nullptr) {
				cout << Curr->data << "\t";
				Curr = Curr->Next;
			}
		}

		void Delete(int d) {
			if (First == nullptr) {
				cout << "\nList is Empty\n";
				return;
			}

			Node *Curr = First;
			Node *Prev = nullptr;

			while (Curr != nullptr && Curr->data != d) {
				Prev = Curr;
				Curr = Curr->Next;
			}

			if (Curr == nullptr) {
				cout << "\nItem not Found\n";
				return;
			}

			// deleting first node
			if (Curr == First) {
				First = First->Next;
				if (Curr == Last)
					Last = First;
			}
			// deleting last or middle
			else {
				Prev->Next = Curr->Next;
				if (Curr == Last)
					Last = Prev;
			}

			delete Curr;
			cout << "\nNode Deleted\n";
		}

		void AddBtwn(int num1) {
			if (First == nullptr) {
				cout << "\nThe List is Empty\n";
				return;
			}

			cout << "\nEnter the number After which You Add this Number\n";
			int num;
			cin >> num;

			Node *Curr = First;

			while (Curr != nullptr) {
				if (Curr->data == num) {
					Node *temp = new Node();
					temp->data = num1;
					temp->Next = Curr->Next;
					Curr->Next = temp;

					if (Curr == Last)
						Last = temp;

					cout << "\nNode Added Between\n";
					return;
				}
				Curr = Curr->Next;
			}

			cout << "\nThis Number is Not Present in this List\n";
		}

};
int main() {
	List L;

	L.Add(10);
	L.Add(20);
	L.Add(30);
	L.Add(40);

	cout << "Initial List:\n";
	L.show();

	L.AddBtwn(25);

	cout << "\n\nDelete 10 (first node):\n";
	L.Delete(10);
	L.show();

	cout << "\n\nDelete 40 (last node):\n";
	L.Delete(40);
	L.show();

	return 0;
}
