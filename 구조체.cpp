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

	student cbnuS_ce1 = { "김하연",22, 3,"군포시" }; 
	student cbnuS_ce2 = { "안혜영",20, 2,"청주시" }; 
	student cbnuS_ce3{};

	cbnuS_ce3 = cbnuS_ce1;

	cout << cbnuS_ce3.studentName << "학생은" << cbnuS_ce3.studentAge << "살이고, 학년은" <<
		cbnuS_ce3.studentID << "이며," << cbnuS_ce3.studentAddress << "에 산다" << endl;
}