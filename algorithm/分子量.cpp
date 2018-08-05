#include<stdio.h>
#include<string.h>
#define maxn 85

int main(){
	int T;
	char s[maxn];
	scanf("%d", &T);
	while (T--){
		scanf("%s", s);
		int len = strlen(s);
		double k= 0;
		for (int i = 0; i < len; i++){
			if (s[i] == 'C'){
				if (s[i + 1]>='1' && s[i + 1] <= '9' && s[i + 2] >= '0' && s[i + 2] <= '9'){
					k += 12.01*(double)(s[i + 1] - '0')*10.0 + 12.01*(double)(s[i + 2] - '0');
				}
				else if (!(s[i + 1]>'1' && s[i + 1] <= '9')){
					k += 12.01;
				}
				else{
					k += 12.01*(double)(s[i + 1] - '0');
				}
			}
			else if (s[i] == 'H'){
				if (s[i + 1] >= '1' && s[i + 1] <= '9' && s[i + 2] >= '0' && s[i + 2] <= '9'){
					k += 1.008*(double)(s[i + 1] - '0')*10.0 + 1.008*(double)(s[i + 2] - '0');
				}
				else if (!(s[i + 1]>'1' && s[i + 1] <= '9')){
					k += 1.008;
				}
				else{
					k += 1.008*(double)(s[i + 1] - '0');
				}
			}
			else if (s[i] == 'O'){
				if (s[i + 1] >= '1' && s[i + 1] <= '9' && s[i + 2] >= '0' && s[i + 2] <= '9'){
					k += 16.00*(double)(s[i + 1] - '0')*10.0 + 16.00*(double)(s[i + 2] - '0');
				}
				else if (!(s[i + 1]>'1' && s[i + 1] <= '9')){
					k += 16.00;
				}
				else{
					k += 16.00*(double)(s[i + 1] - '0');
				}
			}
			else if(s[i] == 'N'){
				if (s[i + 1] >= '1' && s[i + 1] <= '9' && s[i + 2] >= '0' && s[i + 2] <= '9'){
					k += 14.01*(double)(s[i + 1] - '0')*10.0 + 14.01*(double)(s[i + 2] - '0');
				}
				else if (!(s[i + 1]>'1' && s[i + 1] <= '9')){
					k += 14.01;
				}
				else{
					k += 14.01*(double)(s[i + 1] - '0');
				}
			}
			else continue;
		}
		printf("%.3f\n", k);
	}
	return 0;
}
