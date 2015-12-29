#include <stdio.h>

#define	IN	1
#define	OUT	0

/* Print a histogram of the length of words in the input.*/
/* Horizontal */
int main() {
	int nums[10];
	int c, i, j, chars, state;

	for (i = 0; i < 10; i++) {
		nums[i] = 0;
	}

	chars = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			if (state == OUT) {
				nums[chars]++;
			}
			state = IN;
			chars = 0;
		}
		else {
			state = OUT;
			chars++;
		}
	}

	for (i = 0; i < 10; i++) {
		printf("%d:", i);
		for (j = 0; j < nums[i]; j++) {
			printf("*");
		}
		printf("\n");
	}

	
	return 0;
}
