#include <stdio.h>

int main() {
	int f;
	scanf("%d", &f);
	int cal;
	cal = 5 * (f - 32) / 9;
	printf("Celsius = %d\n", cal);
	return 0;
}