#include <stdio.h>

int main(void){
	char op;
	int num1, num2, result;
	
	printf("연산식 입력(예: 3+4) --> ");
	scanf("%d%c%d",&num1,&op,&num2);
	
	switch(op){
		case '+': result = num1 + num2; break;
		case '-': result = num1 - num2; break;
		case '*': result = num1 * num2; break;
		case '/': result = num1 / num2; break;
		default: printf("\n\t연산자가 잘못입력되었어요."); 
				 printf("\n\t아래 출력된 결과를 무시하세요.\n");
			    	break; 
	}
	printf("\n\t%d %c %d = %d\n",num1, op, num2, result);
	return 0;
}
