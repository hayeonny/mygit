#include <iostream>
#include <iomanip> // setprecision()를 사용하여 소수점 이하 자릿수 설정
#include <cmath> // round() 함수 사용

using namespace std;

int main() {
    const int SIZE = 5; // 배열 크기를 5로 정의
    double numbers[SIZE]; // numbers를 선언하고 5개의 숫자를 입력받아 배열에 저장
    double sum = 0, min, max, mean; // 변수 선언

    // 5개의 숫자를 입력할 것을 출력
    cout << "Enter 5 numbers:\n"; 

    //반복문과 조건문
    for (int i = 0; i < SIZE; ++i) {
        cin >> numbers[i]; // 숫자 입력
        sum += numbers[i]; // 합을 계산

        // 최솟값과 최댓값 구하기
        if (i == 0) {
            min = max = numbers[i];
        }
        else {
            if (numbers[i] < min) min = numbers[i];
            if (numbers[i] > max) max = numbers[i];
        }

    }

    mean = sum / SIZE; // 평균을 계산

    // 소수점 첫째자리까지만 출력
    cout << fixed << setprecision(1);

    // Sum, Mean, Min, Max 출력
    cout << "Sum: " << round(sum*10)/10 << endl; //소수점 둘째자리에서 반올림
    cout << "Mean: " << round(mean*10)/10 << endl; //소수점 둘째자리에서 반올림
    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;

    return 0;
}
