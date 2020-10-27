#include <stdio.h>
int main(void)
{
	int n;
	int a,b,c;
	printf("请输入一个三位数：");
	scanf("%d",&n);
	a=n/100;
	b=(n-100*a)/10;
	c=n%10;
	if(n==a*a*a+b*b*b+c*c*c)
		printf("该数为水仙花数。");
	else
		printf("该数不是水仙花数。");
	return 0;
}
