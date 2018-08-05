#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	double sum;
	scanf_s("%d", &n);
	sum = n*(1 + n) / 2.0;
	printf("%.1f\n", sum);
	return 0;
}

