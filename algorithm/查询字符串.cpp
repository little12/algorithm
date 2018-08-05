//最开始没有使用前缀和算法，导致超时
//错误1：没有将二维数组所有都初始化为0
//错误2：count和a两个数组定义为char，应该为int
//错误3：没有每次初始化count和a数组为0,导致多组数据测试时无法填充0
//错误4：循环时i,j搞混
#include<cstdio>
#include<cstring>
#define maxn 100005

char s[maxn];
int count[maxn], a[maxn][30];  
int main(){
	int T;
	int n, q, l, r;
	int kase = 0;
	scanf("%d", &T);
	while (T-- && T<=10){
		scanf("%d%d", &n, &q);
		scanf("%s", s);
		for (int i = 0; i < maxn; i++){
			for (int j = 0; j < 26; j++){
				a[i][j] = 0;
			}
		}
		memset(count, 0, sizeof(count));
		for (int i = 1; i <= n; i++){
				if (s[i - 1] == 'A'){
					a[i][0] = a[i - 1][0] + 1; 
				}
				else if (s[i - 1] == 'B') {
					a[i][1] = a[i - 1][1] + 1; 
				}
				else if (s[i - 1] == 'C') {
					a[i][2] = a[i - 1][2] + 1; 
				}
				else if (s[i - 1] == 'D') {
					a[i][3] = a[i - 1][3] + 1;  
				}
				else if (s[i - 1] == 'E')  {
					a[i][4] = a[i - 1][4] + 1;  
				}
				else if (s[i - 1] == 'F') {
					a[i][5] = a[i - 1][5] + 1; 
				}
				else if (s[i - 1] == 'G') {
					a[i][6] = a[i - 1][6] + 1;  
				}
				else if (s[i - 1] == 'H') {
					a[i][7] = a[i - 1][7] + 1; 
				}
				else if (s[i - 1] == 'I') {
					a[i][8] = a[i - 1][8] + 1; 
				}
				else if (s[i - 1] == 'J') {
					a[i][9] = a[i - 1][9] + 1;  
				}
				else if (s[i - 1] == 'K') {
					a[i][10] = a[i - 1][10] + 1; 
				}
				else if (s[i - 1] == 'L')  {
					a[i][11] = a[i - 1][11] + 1;
				}
				else if (s[i - 1] == 'M') {
					a[i][12] = a[i - 1][12] + 1; 
				}
				else if (s[i - 1] == 'N') {
					a[i][13] = a[i - 1][13] + 1; 
				}
				else if (s[i - 1] == 'O') {
					a[i][14] = a[i - 1][14] + 1; 
				}
				else if (s[i - 1] == 'P') {
					a[i][15] = a[i - 1][15] + 1; 
				}
				else if (s[i - 1] == 'Q') {
					a[i][16] = a[i - 1][16] + 1; 
				}
				else if (s[i - 1] == 'R') {
					a[i][17] = a[i - 1][17] + 1; 
				}
				else if (s[i - 1] == 'S') {
					a[i][18] = a[i - 1][18] + 1; 
				}
				else if (s[i - 1] == 'T')  {
					a[i][19] = a[i - 1][19] + 1;  
				}
				else if (s[i - 1] == 'U') {
					a[i][20] = a[i - 1][20] + 1; 
				}
				else if (s[i - 1] == 'V')  {
					a[i][21] = a[i - 1][21] + 1;
				}
				else if (s[i - 1] == 'W') {
					a[i][22] = a[i - 1][22] + 1; 
				}
				else if (s[i - 1] == 'X') {
					a[i][23] = a[i - 1][23] + 1;  
				}
				else if (s[i - 1] == 'Y') {
					a[i][24] = a[i - 1][24] + 1; 
				}
				else if (s[i - 1] == 'Z') {
					a[i][25] = a[i - 1][25] + 1;
				}
			for (int j = 0; j < 26; j++){
				if (a[i][j] == 0) a[i][j] = a[i - 1][j];
			}
		}
		for (int j = 0; j < q; j++){
			scanf("%d%d", &l, &r);
			for (int i = 0; i <26; i++){
				if ((a[r][i] - a[l - 1][i])>0){
					count[j] = a[r][i] - a[l - 1][i];
					break;
				}
			}
		}
		printf("Case #%d:\n", ++kase);
		for (int j = 0; j < q; j++){
			printf("%d\n", count[j]);
		}
	}
	return 0;
}