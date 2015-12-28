#include <stdio.h>

int main() {
	int c;

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			putchar(c);
			c = getchar();
			while (c != EOF && c == ' ') {
				c = getchar();
			}
		}
		putchar(c);
	}

	return 0;
}
