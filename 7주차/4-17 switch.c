#include <stdio.h>

int main(void){
	char op;
	int num1, num2, result;
	
	printf("����� �Է�(��: 3+4) --> ");
	scanf("%d%c%d",&num1,&op,&num2);
	
	switch(op){
		case '+': result = num1 + num2; break;
		case '-': result = num1 - num2; break;
		case '*': result = num1 * num2; break;
		case '/': result = num1 / num2; break;
		default: printf("\n\t�����ڰ� �߸��ԷµǾ����."); 
				 printf("\n\t�Ʒ� ��µ� ����� �����ϼ���.\n");
			    	break; 
	}
	printf("\n\t%d %c %d = %d\n",num1, op, num2, result);
	return 0;
}
