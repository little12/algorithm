#include<stdio.h>
#include<math.h>
#define pi 4*atan(1.0)
int main()
{
	int n;
	double s1, s2;
	scanf_s("%d", &n);
	s1 = sin((n*pi)/180);
	s2 = cos((n*pi) / 180);
	printf("%lf %lf\n", s1, s2);
	return 0;
}
