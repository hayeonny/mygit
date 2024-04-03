#include <iostream>
#include <cmath>
using namespace std;

//�� �� ������ �Ÿ�
double distance(double x1, double y1, double x2, double y2) {
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

//����� ���� (�ﰢ���� �� ���� ���̸� �� ��)
 double heronsFormula(double a, double b, double c) {
	double s = (a + b + c) / 2;
	return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
	double x1, y1, x2, y2, x3, y3, x4, y4;

	//�簢���� �� �������� ��ǥ��
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

	//�� ���� ���̿� �簢���� �� �ﰢ������ ������ �밢���� ����
	double d1 = distance(x1, y1, x2, y2);
	double d2 = distance(x2, y2, x3, y3);
	double d3 = distance(x3, y3, x4, y4);
	double d4 = distance(x4, y4, x1, y1);
	double diag = distance(x1, y1, x3, y3);

	//�� �ﰢ���� ������ ���̿� �簢���� ��ü ����
	double area1 = heronsFormula(d1, d2, diag);
	double area2 = heronsFormula(d3, d4, diag);
	double totalarea = area1 + area2;
	
	cout << "�簢���� ���̴�" << totalarea << endl;

	return 0;
}