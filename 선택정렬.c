#include <stdio.h>
#define SIZE 10

int main() {
	int list[10] = { 74, 91, 37, 19, 57, 75, 59, 33, 59, 2 };
	int i, j, temp, least;

	for (i = 0; i < SIZE; j++){
		least = i;
	for (j = i + 1; j < SIZE; j++)
		if (list[j] < list[least])
			least = j;
	temp = list[i];
	list[i] = list[least];
	list[least] = temp;
	}

	for (i = 0; i < SIZE; i++)
		printf("%d", list[i]);
	printf("\n");

	return 0;

}
