#include <stdio.h>
int main(void) {
	int n1 = 10, n2 = 20, n3 = -10;
	int max, min, abs; //큰수, 작은수, 절대값

	max = (n1 >= n2) ? n1 : n2;
	printf("%d와 %d 중에서 큰 수는 %d\n", n1, n2, max);

	min = (n1 >= n2) ? n2 : n1;
	printf("%d와 %d 중에서 작은 수는 %d\n", n1, n2, min);

	abs = (n3 > 0) ? n3 : -n3;
	printf("%d의 절댓값은 %d이다.\n", n3, abs);

	return 0;
}