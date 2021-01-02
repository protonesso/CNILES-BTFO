#include <stdio.h>

#pragma inline

double a_sqrt(double i) {
	double result;

	asm("fldl %1;"
		"fsqrt;"
		: "=&t" (result) : "m" (i));

	return result;
}

int main() {
	printf("%f\n", a_sqrt(64));
	return 0;
}
