#include<stdio.h>
int main(){
	int n, m;
		int a, b;
		scanf_s("%d%d", &n, &m);
		a = (m - 2*n) / 2;
		b = n - a;
		if (a >= 0 && b >= 0){
			printf("%d %d\n", b, a);
		}
		else{
			printf("No answer\n");
		}
	return 0;
}