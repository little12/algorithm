#include<stdio.h>
int main()
{
	double a, b, c, average;
	scanf_s("%lf%lf%lf", &a, &b, &c);
	average = (a + b + c )/ 3;
	printf("%.3f\n", average);
	return 0;
}
