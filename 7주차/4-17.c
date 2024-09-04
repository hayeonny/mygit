//점수 계산 프로그램 
#include <stdio.h>

int main(){
	int score;
	char grade;
	
	printf("점수를 입력하시오 : ");
	scanf("%d",&score);
	
	if(score>=90)   // if문은 경계를 명확히 해야함 
	    grade = 'A';
	if(score>=80&&score<90)
	    grade = 'B';
	if(score>=70&&score<80)
	    grade = 'C';
	if(score>=60&&score<70)
	    grade = 'D';	    
	if(score<60)
	    grade = 'F';	
	    
	/*중첩if의 변형 
	if(score >=90)
		grade = 'A';
	else if (score>=80)
		grade = 'B';
	else if (score>=70)
		grade = 'C';
	else if (score>=60)
		grade = 'D';
	else (score<60)
		grade = 'F';     */        
	
	printf("\n\tscore = %d \n\tgrade = %c\n", score, grade);
	
	return 0;
}
