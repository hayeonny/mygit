#include <iostream>
using namespace std;

int main()
{
	int num ;
	int cnt=0;

	cout << "���� �����ϴ� ���� ���߾� ������\n" ;
	
	do{
		cin >> num;
		cnt += 1;

	} while (num != 7);
	cout << cnt << "��° ���߼̽��ϴ�.";
}