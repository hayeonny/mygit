#include <iostream>
using namespace std;

int main() {
	int score = 96;
	int* pScore = &score; //pScore�� score�� �ּҷ� �ʱ�ȭ

	cout << "score ��" << score << ", �޸� ��ġ" << &score << endl;
	cout << "pScore ��" << *pScore << ", �޸� ��ġ" << &pScore << endl;
}