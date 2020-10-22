#include <stdio.h>
int main(void)
{
	int a,b,c;
	printf("请输入两个正整数：");
	scanf("%d,%d",&a,&b);
	while(b){
		c=a%b;
		a=b;
		b=c;
	}
	printf("他们的最大公因子是%d。\n",a);
	return 0;
}

