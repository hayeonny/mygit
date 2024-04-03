#include <iostream>
#include <string>
using namespace std;

int main() {
	int score = 96;
	int& rScore = score;

	cout << score << "," << rScore << endl;
	score = 30;
	cout << score << "," << rScore << endl;
	rScore = 40;
	cout << score << "," << rScore << endl;
}