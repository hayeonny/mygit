#include <iostream>
#include <cmath>
using namespace std;

//두 점 사이의 거리
double distance(double x1, double y1, double x2, double y2) {
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

//헤론의 공식 (삼각형의 세 변의 길이를 알 때)
 double heronsFormula(double a, double b, double c) {
	double s = (a + b + c) / 2;
	return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
	double x1, y1, x2, y2, x3, y3, x4, y4;

	//사각형의 네 꼭짓점의 좌표들
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

	//네 변의 길이와 사각형을 두 삼각형으로 나누는 대각선의 길이
	double d1 = distance(x1, y1, x2, y2);
	double d2 = distance(x2, y2, x3, y3);
	double d3 = distance(x3, y3, x4, y4);
	double d4 = distance(x4, y4, x1, y1);
	double diag = distance(x1, y1, x3, y3);

	//두 삼각형의 각각의 넓이와 사각형의 전체 넓이
	double area1 = heronsFormula(d1, d2, diag);
	double area2 = heronsFormula(d3, d4, diag);
	double totalarea = area1 + area2;
	
	cout << "사각형의 넓이는" << totalarea << endl;

	return 0;
}