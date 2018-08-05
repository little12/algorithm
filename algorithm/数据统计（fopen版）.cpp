#include<stdio.h>
#define INF 1000000000
int main()
{
	FILE *fin,*fout;
	fin = fopen("data.in","rb");
	fout=fopen("data.out","wb");
	//scanf的返回值是成功输入变量的个数，输入结束时，scanf函数无法读取x时，返回0
	int x, s=0, n = 0, min = INF, max = -INF;
	while (fscanf(fin,"%d", &x) == 1){
		s += x;
		if (x < min) min = x;
		if (x>max) max = x;
		n++;
	}
	fprintf(fout,"%d %d %.3f\n", min, max, (double)s / n);
	fclose(fin);
	fclose(fout);
	return 0;
}
