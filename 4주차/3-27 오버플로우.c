#include <stdio.h>
//#define PI 3.141592 

int main(void){	
	int radius=10;   //반지름 초기화
	double area, length;  //원의 넓이, 둘레
	const double PI = 3.141592;
	
	area = PI * radius * radius;
	length = 2 * PI * radius;
	
	printf("원의 반지름: %d\n", radius);
	printf("원의 넓  이: %.2lf\n", area);
	printf("원의 둘  레: %.2lf\n", length);	
	
	return 0; 
} 
