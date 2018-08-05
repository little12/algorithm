#include<stdio.h>

int main()
{
	int n1;
	scanf_s("%d", &n1);
	long long n = n1; //考虑到会溢出
	int count = 0;
	while (n > 1){
		if (n % 2 != 0){
			n = 3 * n + 1; 
		}
		else{
			n = n / 2;
		}
		count++;
	}
	printf("%d\n", count);
	return 0;
}