#include <stdio.h>
int main(void) {
	int num;

	printf("0-100�� ���̿� ���� �ϳ��� �Է����ּ���: ");       //�Է� ���� 
	scanf("%d", &num);
	printf("�Է¹��� ������ %d�Դϴ�.\n", num); 

    
    
    if(num >= 90) 
		printf("%d�� A�����Դϴ�.\n",num);   //�����̸� ������� ���� 

    if(num >= 80 & num < 90) 
		printf("%d���� B�����Դϴ�.\n",num);
		
    if(num >= 70 & num < 80) 
		printf("%���� C�����Դϴ�.\n",num);
		
	else
	    printf("%d���� F�����Դϴ�.\n",num);
	    
	printf("-----���� ���� ��-----");

	return 0;
}
