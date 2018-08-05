#include<stdio.h>
#include<math.h>

int main()
{
	int a, b, c;
	int a1, b1, c1;
	scanf_s("%d%d%d", &a, &b, &c);
	a1 = a*a;
	b1 = b*b;
	c1 = c*c;
	if (a + b < c || a + c < b || b + c < a){
		printf("not a triangle\n");
	}
	else if ((a1 + b1) == c1 || (a1 + c1) == b1 || (b1 + c1) == a1){
		printf("yes\n");
	}
	else{
		printf("no\n");
	}
	return 0;
}