#include <stdio.h>
int main(void)
{
	int i,n;
	printf("请输入一个整数：");
	scanf("%d",&n);
	i=0;
	while(i<n-2)
		printf("%d ",i+=2);
	return 0;
}
