#include <stdio.h>
int main(void) {
	int num;

	printf("0-100점 사이에 점수 하나를 입력해주세요: ");       //입력 관련 
	scanf("%d", &num);
	printf("입력받은 점수는 %d입니다.\n", num); 

    
    
    if(num >= 90) 
		printf("%d는 A학점입니다.\n",num);   //거짓이면 수행되지 않음 

    if(num >= 80 & num < 90) 
		printf("%d점은 B학점입니다.\n",num);
		
    if(num >= 70 & num < 80) 
		printf("%점은 C학점입니다.\n",num);
		
	else
	    printf("%d점은 F학점입니다.\n",num);
	    
	printf("-----학점 판정 끝-----");

	return 0;
}
