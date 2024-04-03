#include <iostream>
using namespace std;

int main() {

	const int NUMBER_TOTAL_SIZE = 10; //��� ����

	//-1�� �ӽð�����, ���� ������ ���ڸ� ���߿� ������ �ڸ�
    int number[NUMBER_TOTAL_SIZE] = { 2,4,3,5,7,6,8,9,0,-1 }; 

	//������ ���� ã�� �� ���� ����
	//���⼭ 0-9 ���̿� ������ ���ڰ� 1����� �����ϰ� ���� 1�� ������
	for (int i = 0; i < NUMBER_TOTAL_SIZE; ++i) {
		if (number[i] == -1) {
			number[i] = 1; //������ ���� 1 ����
			break;
		}
	}

	//���� ���� �˰����� ����Ͽ� �迭 ����
	for (int i = 0; i < NUMBER_TOTAL_SIZE - 1; ++i) { 
		for (int j = 0; j < NUMBER_TOTAL_SIZE - i - 1; ++j) {
			if(number[j]>number[j+1]){ //swap
				int temp = number[j];  //insert
				number[j] = number[j + 1];
				number[j + 1] = temp;
			}
		}
	}
	
	//���ĵ� �迭 ���
	cout << "Sorted array: ";
	for (int i = 0; i < NUMBER_TOTAL_SIZE; ++i) {
		cout << number[i] << "";
	}

	return 0;
}