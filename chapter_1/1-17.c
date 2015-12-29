#include <stdio.h>

#define	MAXLINE	1000	/* maximum input line size */

int getlineC(char line[], int maxline);

/* Print all lines greater than 80 characters. */
int main() {
	int len;	/* current line length */
	int max;	/* maximum length seen so far */
	char line[MAXLINE];		/* current input line */
	char longest[MAXLINE];	/* longest line saved here */

	max = 0;
	while ((len = getlineC(line, MAXLINE)) > 0) {
		if (len > 80) {
			printf("%s", line);
		}
	}
	
	return 0;
}

/* getline: read a line into s, return length */
int getlineC(char s[], int lim) {
	int c, i;

	for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; i++) {
		s[i] = c;
	}
	if (c == '\n') {
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return i;
}
