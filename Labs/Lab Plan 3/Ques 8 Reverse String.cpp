#include <iostream>
using namespace std;

void reverse(char *ptr) {
	char *start = ptr;
	int count = 0;

	while (*ptr != '\0') {
		count++;
		ptr++;
	}

	cout << "Reversed Array: ";
	for (int i = count; i > 0; i--) {
		cout << *(start + i - 1);
	}
}

int main() {
	char s[] = "Ali Rehmani";
	reverse(s);
	return 0;
}
