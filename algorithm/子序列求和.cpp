#include<stdio.h>

int main()
{
	long long n, m;
	double sum = 0.0;
	int kase = 0;
	while (scanf("%lld%lld", &n, &m) == 2 && !(n == 0 && m == 0)){
		for (long long i = n; i <= m; i++){
			sum = sum+ 1.0 /(double) (i*i);
		}
		printf("Case %d: %.5f\n", ++kase, sum);
	}
	return 0;
}
