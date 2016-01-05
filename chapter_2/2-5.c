#include <stdio.h>

int any(char s1[], char s2[]);
int contains(char s[], char c);

int main() {
	char s[] = "hello";
	char t[] = "ok";
	char u[] = "abc";

	printf("%d\n", any(s, t));
	printf("%d\n", any(s, u));
	
	return 0;
}

/* Returns the first location in s1 where any char in s2 occurs.  Returns -1 
if s1 contains no chars from s2. */
int any(char s1[], char s2[]) {
	int i;
	i = 0;
	while (s1[i] != '\0') {
		if (contains(s2, s1[i]))
			return i;
		i++;
	}
	return -1;
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
