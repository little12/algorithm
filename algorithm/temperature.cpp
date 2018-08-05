#include<stdio.h>
#include<math.h>
int main()
{
	double f,c;
	scanf_s("%lf", &f);
	c = 5 * (f - 32) / 9;
	printf("%.3f\n", c);
	return 0;
}
