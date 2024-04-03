#include <iostream>
using namespace std;

int main() {

	const int NUMBER_TOTAL_SIZE = 10; //상수 선언

	//-1은 임시값으로, 실제 누락된 숫자를 나중에 삽입할 자리
    int number[NUMBER_TOTAL_SIZE] = { 2,4,3,5,7,6,8,9,0,-1 }; 

	//누락된 숫자 찾기 및 삽입 정렬
	//여기서 0-9 사이에 누락된 숫자가 1개라고 가정하고 직접 1을 삽입함
	for (int i = 0; i < NUMBER_TOTAL_SIZE; ++i) {
		if (number[i] == -1) {
			number[i] = 1; //누락된 숫자 1 삽입
			break;
		}
	}

	//버블 정렬 알고리즘을 사용하여 배열 정렬
	for (int i = 0; i < NUMBER_TOTAL_SIZE - 1; ++i) { 
		for (int j = 0; j < NUMBER_TOTAL_SIZE - i - 1; ++j) {
			if(number[j]>number[j+1]){ //swap
				int temp = number[j];  //insert
				number[j] = number[j + 1];
				number[j + 1] = temp;
			}
		}
	}
	
	//정렬된 배열 출력
	cout << "Sorted array: ";
	for (int i = 0; i < NUMBER_TOTAL_SIZE; ++i) {
		cout << number[i] << "";
	}

	return 0;
}