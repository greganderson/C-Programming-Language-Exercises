#include <stdio.h>
#include <math.h>

int htoi(char s[]);

/* Implementation of htoi, or hexadecimal to integer */
int main() {
	char s[] = "0x1Ff";
	printf("%d\n", htoi(s));
	
	return 0;
}

int htoi(char s[]) {
	int i, c, total, length;

	total = 0;
	length = 0;

	while (s[length] != '\0')
		length++;

	for (i = length-1; i > 1; i--) {
		/* Number */
		if (s[i] >= '0' && s[i] <= '9') {
			c = s[i] - '0';
		}
		/* Uppercase */
		else if (s[i] >= 'A' && s[i] <= 'F') {
			c = s[i] - ('A' - 10);
		}
		/* Lowercase */
		else {
			c = s[i] - ('a' - 10);
		}

		total += c * (int)pow(16, length - (i+1));
	}

	return total;
}
