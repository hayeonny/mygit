#include <iostream>
#include <iomanip> // setprecision()�� ����Ͽ� �Ҽ��� ���� �ڸ��� ����
#include <cmath> // round() �Լ� ���

using namespace std;

int main() {
    const int SIZE = 5; // �迭 ũ�⸦ 5�� ����
    double numbers[SIZE]; // numbers�� �����ϰ� 5���� ���ڸ� �Է¹޾� �迭�� ����
    double sum = 0, min, max, mean; // ���� ����

    // 5���� ���ڸ� �Է��� ���� ���
    cout << "Enter 5 numbers:\n"; 

    //�ݺ����� ���ǹ�
    for (int i = 0; i < SIZE; ++i) {
        cin >> numbers[i]; // ���� �Է�
        sum += numbers[i]; // ���� ���

        // �ּڰ��� �ִ� ���ϱ�
        if (i == 0) {
            min = max = numbers[i];
        }
        else {
            if (numbers[i] < min) min = numbers[i];
            if (numbers[i] > max) max = numbers[i];
        }

    }

    mean = sum / SIZE; // ����� ���

    // �Ҽ��� ù°�ڸ������� ���
    cout << fixed << setprecision(1);

    // Sum, Mean, Min, Max ���
    cout << "Sum: " << round(sum*10)/10 << endl; //�Ҽ��� ��°�ڸ����� �ݿø�
    cout << "Mean: " << round(mean*10)/10 << endl; //�Ҽ��� ��°�ڸ����� �ݿø�
    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;

    return 0;
}
