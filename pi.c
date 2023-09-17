//171805024 Nagihan Baz

#include<stdio.h>
#pragma warning(disable:4996)
int main(void) {
	double pi = 0;
	int dividing = 1;
	int counter = 0;
	double x = 3.14;

	

	while (counter < 1000)
	{
		if (counter % 2 == 0) {
			pi = pi + 4.0 / dividing;
			counter++;
			printf("%d-) %lf\n", counter,pi);

		}
		else {
			pi = pi - 4.0 / dividing;
			counter++;
			printf("%d-) %lf\n", counter, pi);

		}
		dividing = dividing + 2;
	}
	
	return 0;

}
