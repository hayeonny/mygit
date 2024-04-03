#include <iostream>
using namespace std;

int main() {
	char dogName[20];
	char dogColor[10];

	cout << "Please enter your dog's name: \n";
	cin.getline(dogName, 20);
	cout << "Please enter your dog's fur color: \n";
	cin.getline(dogColor, 10);
	cout << "The color of" << dogName << "is" << dogColor << "\n";

}