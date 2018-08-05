#include<stdio.h>

int main()
{
	int a, b, c, kase=0;
	while (scanf("%d%d%d", &a, &b, &c) != EOF){
		for (int i = 10; i <= 100; i++){
			if ((i - a) % 3 == 0 && (i - b) % 5 == 0 && (i - c) % 7 == 0){
				printf("Case %d: %d\n", ++kase, i);
				break;
			}
			if (i ==100) printf("Case %d: No answer\n", ++kase);
		}
	
	}
	return 0;
}

//法2
//用任意两数的最小公倍数乘第三个数并求和，对和求105的余数即可
#include<stdio.h>

int main(){
	int a,b,c,kase=0;
	while(scanf("%d%d%d", &a,&b,&c) != EOF){
		int sum;
		sum = 70*a +21*b + 15*c;
		if(sum%105 <= 100){
			printf("Case %d: %d\n", ++kase, i);
		}
		else{
			printf("Case %d: No answer\n", ++kase);
		}
	}
	return 0;
}