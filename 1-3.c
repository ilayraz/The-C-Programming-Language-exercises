#include <stdio.h>

/* print Fahrenheit-Celsius table */

int main (void) {
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;		/* lower limit of temperature table */
	upper = 300;	/* upper limit */
	step = 20;		/* step size */

	printf("Fharenheit\tCelsius\n");

	fahr = lower;
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f %18.1f\n", fahr, celsius);
		fahr += step;
	}

	return 0;
}
