#include <iostream>
using namespace std;

int main() {
	const int NUMBER_TOTAL_SIZE = 5;
	
	int number[NUMBER_TOTAL_SIZE] = { 2,4 };

	number[2] = number[1];
	number[1] = 3;

	for (int i = 0; i < NUMBER_TOTAL_SIZE; i++)
		cout << number[i] << " ";

	return 0;

}