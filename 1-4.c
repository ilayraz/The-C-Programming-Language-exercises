#include <stdio.h>

/* print Celsius-Fahrenheit table */

int main(void) {
	float celsius, fahr;
	int lower, upper, step;

	lower = 0;		/* lower limit of temperature table */
	upper = 300;	/* upper limit */
	step = 20;		/* step size */

	celsius = lower;
	while (celsius <= upper) {
		fahr = celsius * (9.0/5.0) + 32;
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius += step;
	}

	return 0;
}
