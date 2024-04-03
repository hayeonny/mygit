#include <iostream>
using namespace std;

int main()
{
	int num ;
	int cnt=0;

	cout << "내가 좋아하는 수를 맞추어 보세요\n" ;
	
	do{
		cin >> num;
		cnt += 1;

	} while (num != 7);
	cout << cnt << "번째 맞추셨습니다.";
}