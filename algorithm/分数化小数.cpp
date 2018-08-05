#include<stdio.h>

int main()
{
	long long a, b;
	int c;
	int kase = 0;
	while (scanf("%lld%lld%d", &a, &b, &c) == 3 && !(a == 0 && b == 0 && c == 0)){
		printf("Case %d: %lld.", ++kase, a / b); //输出整数部分
		a %= b;
		for (int i = 0; i < c; i++){
			printf("%lld", a * 10 / b);
			a = a * 10 % b;
		}
		if (a * 10 % b * 10 / b < 5){
			printf("%lld\n", a * 10 / b);
		}
		else{
			printf("%lld\n", a * 10 / b + 1);
		}
	}
	return 0;
}
