#include <stdio.h>
#include <math.h> 

int main(void){
	double a, b, c, dis; 
	
	printf("��� a, ��� b, ��� c�� ���ʴ�� �Է� -->");
	scanf("%lf %lf %lf",&a,&b,&c);
	
	if(a==0)
		printf("������������ ���� %f�Դϴ�.",-c/b);
		
	else {
		dis =b*b -4.0*a*c;
		if(dis>=0){
			printf("������������ ���� %f�Դϴ�.",(-b+sqrt(dis)/(2.0*a)));
			printf("������������ ���� %f�Դϴ�.",(-b-sqrt(dis)/(2.0*a)));
		}
		else
			printf("�Ǳ��� �������� �ʽ��ϴ�.\n");
		} 
	return 0;
}
