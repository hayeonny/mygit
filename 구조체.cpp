#include <iostream>
using namespace std;

struct student {
	char studentName[20];
	int studentAge;
	int studentID;
	char studentAddress[100];
};

int main() {
	struct student cbnu;
	student cbnuS[5];

	student cbnuS_ce1 = { "���Ͽ�",22, 3,"������" }; 
	student cbnuS_ce2 = { "������",20, 2,"û�ֽ�" }; 
	student cbnuS_ce3{};

	cbnuS_ce3 = cbnuS_ce1;

	cout << cbnuS_ce3.studentName << "�л���" << cbnuS_ce3.studentAge << "���̰�, �г���" <<
		cbnuS_ce3.studentID << "�̸�," << cbnuS_ce3.studentAddress << "�� ���" << endl;
}