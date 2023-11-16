/* to be able to use printf */
#include <stdio.h>

int main() {

	/* declare variables*/
	int n = 1;
	double fact = 1, e = 1;

	/* program intro */
	printf("This program calculates the Euler number for 50 terms showing each step\n\n");

	/* start the loop to calculate euler number */
	for (n = 1; n <= 50; n = n + 1) {
		fact = fact * n;
		e = e + (1 / (fact));
		/* print the result for each loop */
		printf("The euler number for %d terms is %.20lf\n", n, e);
	}

	return 0;

}