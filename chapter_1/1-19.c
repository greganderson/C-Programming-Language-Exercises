#include <stdio.h>

#define	MAXLINE	1000	/* Maximum number of characters a string can be */

void reverse(char s[]);

int main() {
	char s[] = "hello";
	char t[] = "beat";

	printf("%s\n", s);
	reverse(s);
	printf("%s\n", s);

	printf("%s\n", t);
	reverse(t);
	printf("%s\n", t);
	
	return 0;
}

/* Reverses a string s */
void reverse(char s[]) {
	int i, c, length;

	/* Get length of string */
	i = 0;
	length = 0;
	while (s[i] != '\0') {
		length++;
		i++;
	}
	length--;

	/* Reverse the string */
	for (i = 0; i < length/2+1; i++) {
		c = s[i];
		s[i] = s[length - i];
		s[length - i] = c;
	}
}
