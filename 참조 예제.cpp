#include <iostream>
using namespace std;

void swap(int& first, int&second);

int main() {
	int first = 3;
	int second = 5;

	cout << "함수 호출 전" << first << "," << second << endl;
	swap(first, second);
	cout << "함수 호출 후" << first << "," << second << endl;
}

void swap(int& first, int&second) {
	int temp = first;
	first = second;
	second = temp;
	return;
}