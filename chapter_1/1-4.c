#include <stdio.h>

/* Conversion from Celsius to Fahrenheit */
int main() {
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 200;
	step = 10;

	celsius = lower;

	printf("Celsius\tFahrenheit\n");
	while (celsius <= upper) {
		fahr = ((9.0 / 5.0) * celsius) + 32.0;
		printf("%3.0f\t%6.0f\n", celsius, fahr);
		celsius += step;
	}
	
	return 0;
}
