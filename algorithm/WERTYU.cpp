#include<stdio.h>
#include<string.h>

char s[] = "`1234567890-=QWERTYUIOP[]\ASDFGHJKL;'ZXCVBNM,./"; //常量数组
int main(){
	int i, c;
	while ((c = getchar()) != EOF){
		for (i = 0; s[i] && s[i] != c; i++);
		if (s[i]) putchar(s[i - 1]);
		else putchar(c);
	}
	return 0;
}
