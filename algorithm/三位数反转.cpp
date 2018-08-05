#include<stdio.h>
int main(){
	int m, n;
	scanf_s("%d", &n);
	m = n / 100 + (n / 10 % 10)*10 + n % 10 * 100;
	printf("%d\n", m);

	return 0;
}