#include <stdio.h>
const double exp = 1e-12;
double f(double a);

int main() {
	double x;
	scanf("%lf", &x);
	printf("f(%.1lf) = %.1lf\n", x, f(x));
	return 0; 
}

double f(double a) {
	if (a == 0.0) return 0.0;
	else {
		return 1.0 / a;
	}
}