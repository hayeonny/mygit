//�Ž�����  �ǽ� 
#include <stdio.h>

int main(void){
	int money=50000, price=24300,charge=0, n10000=0, n1000=0, n100=0;
	
	charge = money-price; // �Ž�����, 25700
	n10000 = charge/10000; // 2
	charge = charge % 10000;
	n1000 = charge/1000;
	charge =charge % 1000;
	n100 = charge/100;

printf("*������ �� : %d��\n",money);
	printf("*������ �� : %d��\n",money);
	printf("*���� ���� : %d��\n",price);
	printf("*�Ž����� : %d��\n",charge);
	printf("------------------\n");
	printf("  - ����¥�� ���� : %d\n",n10000);
	printf("  - õ��¥�� ���� : %d\n",n1000);
	printf("  - ���¥�� ���� : %d\n",n100);

	
	return 0;
}
