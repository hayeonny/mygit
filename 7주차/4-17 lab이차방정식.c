#include <stdio.h>
#include <math.h> 

int main(void){
	double a, b, c, dis; 
	
	printf("계수 a, 계수 b, 계수 c를 차례대로 입력 -->");
	scanf("%lf %lf %lf",&a,&b,&c);
	
	if(a==0)
		printf("일차방정식의 근은 %f입니다.",-c/b);
		
	else {
		dis =b*b -4.0*a*c;
		if(dis>=0){
			printf("이차방정식의 근은 %f입니다.",(-b+sqrt(dis)/(2.0*a)));
			printf("이차방정식의 근은 %f입니다.",(-b-sqrt(dis)/(2.0*a)));
		}
		else
			printf("실근이 존재하지 않습니다.\n");
		} 
	return 0;
}
