#include<stdio.h>

int main()
{
	const int cloth = 95;
	int n;
	double pay;
	scanf_s("%d", &n);
	pay = cloth*n;
	if (pay >= 300){
		pay = pay*0.85;
	}
	printf("%.2f\n", pay);
	return 0;
}
