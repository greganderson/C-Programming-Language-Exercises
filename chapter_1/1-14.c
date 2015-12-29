#include <stdio.h>

#define	DIFF	'a'-'A'	/* Integer difference between a capital letter and a
						lowercase letter */

/* Histogram of the frequencies of the letters.  All letters are lowercased. */
/* NOTE: This is different than the exercise.  I realized that after almost
finishing this version, so I am just keeping this as is. */
int main() {
	int chars[26];
	char buf[2];
	buf[0] = '0';
	buf[1] = '\0';
	int c, i, j;

	for (i = 0; i < 26; i++)
		chars[i] = 0;

	/* Count the chars */
	while ((c = getchar()) != EOF) {
		if (c >= 'A' && c <= 'Z') {
			c += DIFF;
		}
		if (c >= 'a' && c <= 'z') {
			chars[c-'a']++;
		}
	}

	/* Print the histogram */
	for (i = 0; i < 26; i++) {
		buf[0] = i+'a';
		printf("%s:", buf);
		for (j = 0; j < chars[i]; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
