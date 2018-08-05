#include<stdio.h>
#include<time.h>
int main()
{
	const int MOD = 1000000;
	int n;
	scanf_s("%d", &n);
	int S = 0;
		for (int i = 1; i <= n; i++){
			int term = 1;
			for (int j = 1; j <= i; j++){
				term = (term*j) % MOD;
			}
			S = (S + term) % MOD;
		}
	printf("%d\n", S);
	printf("Time used = %.2f\n", (double)clock() / CLOCKS_PER_SEC); //计算程序运行时间
	return 0;
}
