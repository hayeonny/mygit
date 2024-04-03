#include <iostream>
using namespace std;

int main() {
	char dogName[20];
	char dogColor[10];

	cout << "Please enter yout dog's name: \n";
	cin >> dogName;
	cout << "Please enter your dog's fur color: \n";
	cin >> dogColor;
	cout << "The color of" << dogName << "is" << dogColor << ".\n";
}