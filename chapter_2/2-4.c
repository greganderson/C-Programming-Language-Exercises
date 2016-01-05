#include <stdio.h>

void squeeze_alt(char s1[], char s2[]);
int contains(char s[], char c);
void remove_char(char s[], int index);

int main() {
	char s[] = "hello";
	
	return 0;
}

/* Delete each character in s1 that matches any character in s2 */
void squeeze_alt(char s1[], char s2[]) {
	int i, j;

	while (s1[i] != '\0') {
		if (contains(s2, s1[i])) {
			remove_char(s1, i);
		}
		i++;
	}
}

/* Returns 1 if s contains c, 0 otherwise */
int contains(char s[], char c) {
	int i;
	i = 0;
	while (s[i] != '\0') {
		if (s[i] == c)
			return 1;
		i++;
	}
	return 0;
}

/* remove the character at the specified index */
void remove_char(char s[], int index) {
	int i, j;

	i = j = 0;
	while (s[j] != '\0') {
		if (j == index)
			j++;
		s[i] = s[j];
		i++;
		j++;
	}
	s[i] = '\0';
}
