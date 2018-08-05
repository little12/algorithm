#include<stdio.h>
#include<math.h>
int main()
{
	//圆柱体表面积
	const double pi = acos(-1.0);
	double r, h, s1, s2, s3;
	scanf_s("%lf%lf", &r, &h);
	s1 = pi*r*r;
	s2 = 2 * pi*r*h;
	s3 = 2.0 * s1 + s2;
	printf("%.3f\n", s3);
	return 0;
}
