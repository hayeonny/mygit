#include <stdio.h>

int main(void) {
	int i;
	int k;

	for (k = 1; k <= 5; i++) {
		for (i = 1; i <= 5; i++)
			printf("%5d", i);
		printf("\n");
	}
	return 0;
}
