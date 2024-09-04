#include <stdio.h>
int main(void) {
	printf("char형size \t\t: %dByte\n", sizeof(char));                 //문자형, 1
	
	printf("short형size \t\t: %dByte\n", sizeof(short));               //정수형, 2 
	printf("int형size \t\t: %dByte\n", sizeof(int));                   //정수형, 4 
	printf("long int형size \t\t: %dByte\n", sizeof(long int));         //정수형, 4 
	printf("long long형size \t: %dByte\n", sizeof(long long)); 	       //정수형, 8 
	
	printf("float형size \t\t: %dByte\n", sizeof(float));               //실수형, 4		
	printf("double형size \t\t: %dByte\n", sizeof(double));             //실수형, 8 
 	printf("long double형size \t: %dByte\n", sizeof(long double));     //실수형, 16 
	
	return 0;
}
