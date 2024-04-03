#include <iostream>

using namespace std;

int totalSum = 0;

void add(int a) {
	totalSum += a;
}

void print() {
	cout << totalSum << endl;
}

int main() {
	cout << "Test" << endl;

	for (int i = 0; i < 5; i++) {
		add(i);
	}
	print();
	return 0;
}