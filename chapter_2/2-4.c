#include <stdio.h>

int main() {

	
	return 0;
}

/* Delete each character in s1 that matches any character in s2 */
void squeeze_alt(char s1[], char s2[]) {
	int i, j;

	for (i = j = 0; s[i] != '\0'; i++) {
		if (s[i] != c) {
			s[j++] = s[i];
		}
	}
	s[j] = '\0';
}
