#include <stdio.h>
int main(void) {
	int num;

	printf("���� �ϳ� �Է����ּ���: ");       //�Է� ���� 
	scanf("%d", &num);
	printf("�Է¹��� ���� %d�Դϴ�.\n", num); 

    
    
    if(num % 2 == 0) {      //if ������ ����Ŭ�� ���� ���� 
		printf("%d�� ¦���Դϴ�.\n",num);   //�����̸� ������� ���� 
		printf("%d�� ¦���� �³���?\n");
	}
	else
	    printf("%d�� Ȧ���Դϴ�.\n",num);
	    
	printf("-----Ȧ¦ ���� ��-----");

	return 0;
}
