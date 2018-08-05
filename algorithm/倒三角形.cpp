#include<stdio.h>

int main()
{
	int n;
	scanf("%d\n", &n);
	for (int i = 2 * n - 1; i > 0; i--){
		for (int k = 0; k < n; k++){
			printf(" ");
		}
		for (int j = 0; j < i; j++){
			printf("#");
		}
		printf("\n");
	}
	return 0;
}