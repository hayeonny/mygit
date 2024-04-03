#include <iostream>
#include <string>
using namespace std;

int main() {
	char charTest1 [10] = "char Test";
	char charTest2 [10];

	charTest2 = charTest1;

	string strTest1 = "String";
	string strTest2;
	strTest2 = strTest1;

	string strTest3 = strTest1 + strTest2;
	string strTest4 = "Test";
	strTest4 += strTest1;

	cout << strTest1 << "," << strTest2 << "," << strTest3 << "," << strTest4 << endl;
}