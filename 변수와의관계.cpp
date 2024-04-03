#include <iostream>
using namespace std;

int main() {
	int score = 96;
	int* pScore = &score; //pScore를 score의 주소로 초기화

	cout << "score 값" << score << ", 메모리 위치" << &score << endl;
	cout << "pScore 값" << *pScore << ", 메모리 위치" << &pScore << endl;
}