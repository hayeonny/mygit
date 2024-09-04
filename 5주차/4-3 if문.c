#include <stdio.h>
int main(void) {
	int num;

	printf("정수 하나 입력해주세요: ");       //입력 관련 
	scanf("%d", &num);
	printf("입력받은 수는 %d입니다.\n", num); 

    
    
    if(num % 2 == 0) {      //if 다음에 세미클론 쓰지 말기 
		printf("%d는 짝수입니다.\n",num);   //거짓이면 수행되지 않음 
		printf("%d는 짝수가 맞나요?\n");
	}
	else
	    printf("%d는 홀수입니다.\n",num);
	    
	printf("-----홀짝 판정 끝-----");

	return 0;
}
