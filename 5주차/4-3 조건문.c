#include <stdio.h>
int main(void) {
	int n1 = 10, n2 = 20, n3 = -10;
	int max, min, abs; //ū��, ������, ���밪

	max = (n1 >= n2) ? n1 : n2;
	printf("%d�� %d �߿��� ū ���� %d\n", n1, n2, max);

	min = (n1 >= n2) ? n2 : n1;
	printf("%d�� %d �߿��� ���� ���� %d\n", n1, n2, min);

	abs = (n3 > 0) ? n3 : -n3;
	printf("%d�� ������ %d�̴�.\n", n3, abs);

	return 0;
}