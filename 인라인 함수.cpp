#include <iostream>

using namespace std;

inline double sum(double x, double y) { return x + y; }
inline double difference(double x, double y) { return x - y; }
inline double product(double x, double y) { return x * y; }
inline double division(double x, double y) { return x / y; }

int main() {
	double a = 8.6;
	double b = 2.3;

	cout << a << "+" << b << "=" << sum(a, b) << endl;
	cout << a << "-" << b << "=" << difference(a, b) << endl;
	cout << a << "*" << b << "=" << product(a, b) << endl;
	cout << a << "/" << b << "=" << division(a, b) << endl;
}