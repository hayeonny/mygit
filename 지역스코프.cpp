#include <iostream>

using namespace std;

int sum(int a, int b) {
	return a + b;
}

int main() {
	cout << "Test" << endl;

	int ret = sum(1, 2);

	cout << ret << endl;

	int addValue = 0;
	for (int i = 0; i < 5; i++) {
		addValue += sum(i, 2);
	}
	cout << addValue << endl;
	return 0;
}