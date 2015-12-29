#include <stdio.h>

#define	IN	1
#define	OUT	0

/* Print a histogram of the length of words in the input.*/
/* Vertical */
int main() {
	int nums[10];
	int c, i, j, chars, state, max;

	max = -1;

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

	/* Get max */
	for (i = 0; i < 10; i++)
		if (nums[i] > max)
			max = nums[i];


	/* Print the histogram */
	printf("0|1|2|3|4|5|6|7|8|9\n");
	printf("-------------------\n");
	for (i = 0; i < max; i++) {
		for (j = 0; j < 10; j++) {
			if (nums[j]-- > 0) {
				printf("* ");
			}
		}
		printf("\n");
	}
	
	return 0;
}
