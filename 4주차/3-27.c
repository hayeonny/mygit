#include <stdio.h>
int main(void) {
	printf("char��size \t\t: %dByte\n", sizeof(char));                 //������, 1
	
	printf("short��size \t\t: %dByte\n", sizeof(short));               //������, 2 
	printf("int��size \t\t: %dByte\n", sizeof(int));                   //������, 4 
	printf("long int��size \t\t: %dByte\n", sizeof(long int));         //������, 4 
	printf("long long��size \t: %dByte\n", sizeof(long long)); 	       //������, 8 
	
	printf("float��size \t\t: %dByte\n", sizeof(float));               //�Ǽ���, 4		
	printf("double��size \t\t: %dByte\n", sizeof(double));             //�Ǽ���, 8 
 	printf("long double��size \t: %dByte\n", sizeof(long double));     //�Ǽ���, 16 
	
	return 0;
}
