#include<stdio.h>
#include<math.h>

int main()
{
	//法一
	for (int a = 1; a <= 9; a++){
		for (int b = 1; b <= 9; b++){
			int n = a * 1100 + b * 11;
			int m = floor(sqrt(double(n)) + 0.5); //floor返回不超过x的最大整数
			if (m*m == n)
				printf("%d\n", n);
		}
	}

	//法2
	for (int x = 1;; x++){
		int n = x*x;
		if (n < 1000) continue;
		if (n>9999) break;
		int hi = n / 100;
		int lo = n % 100;
		if ((hi / 10 == hi % 10) && (lo / 10 == lo % 10)){
			printf("%d\n", n);
		}
	}
	return 0;
}