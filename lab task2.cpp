#include <iostream>
using namespace std;

int main(void) {
	int n;
	cout << "Enter size of array: ";
	cin >> n;
	int find[n];
	cout << "Enter 8 characters: ";
	for(int i = 0; i < n; i++) {
		cin >> find[i];
	}
	for(int i = 0; i < n; i++) {
		cout << find[i];
	}
	return 0;
}
