#include <stdio.h>
//#define PI 3.141592 

int main(void){	
	int radius=10;   //������ �ʱ�ȭ
	double area, length;  //���� ����, �ѷ�
	const double PI = 3.141592;
	
	area = PI * radius * radius;
	length = 2 * PI * radius;
	
	printf("���� ������: %d\n", radius);
	printf("���� ��  ��: %.2lf\n", area);
	printf("���� ��  ��: %.2lf\n", length);	
	
	return 0; 
} 
