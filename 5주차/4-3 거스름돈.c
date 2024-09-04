//거스름돈  실습 
#include <stdio.h>

int main(void){
	int money=50000, price=24300,charge=0, n10000=0, n1000=0, n100=0;
	
	charge = money-price; // 거스름돈, 25700
	n10000 = charge/10000; // 2
	charge = charge % 10000;
	n1000 = charge/1000;
	charge =charge % 1000;
	n100 = charge/100;

printf("*지불한 돈 : %d원\n",money);
	printf("*지불한 돈 : %d원\n",money);
	printf("*물건 가격 : %d원\n",price);
	printf("*거스름돈 : %d원\n",charge);
	printf("------------------\n");
	printf("  - 만원짜리 개수 : %d\n",n10000);
	printf("  - 천원짜리 개수 : %d\n",n1000);
	printf("  - 백원짜리 개수 : %d\n",n100);

	
	return 0;
}
