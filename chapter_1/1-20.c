#include <stdio.h>

#define	MAXLINE	1000	/* maximum input line size */

int getlineC(char s[], int lim);
void insertSpaces(char s[], int start);

/* Replaces tabs in input with the proper number of blanks for a tab */
int main() {
	int line_size, i;
	char s[MAXLINE];
	while ((line_size = getlineC(s, MAXLINE)) > 0) {
		for (i = 0; i < line_size; i++) {
			if (s[i] == '\t') {
				insertSpaces(s, i);
				i += 4;
			}
		}
		printf("%s\n", s);
	}
	
	return 0;
}


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

void insertSpaces(char s[], int start) {
	int end, i;
	end = 0;
	while (s[end] != '\n' && s[end] != '\0')
		end++;
	
	for (i = end; i > start; i--) {
		s[i+3] = s[i];
	}

	s[i++] = ' ';
	s[i++] = ' ';
	s[i++] = ' ';
	s[i] = ' ';
}
