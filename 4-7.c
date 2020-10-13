#include <stdio.h>
int main(void)
{
	int i,n;
	printf("请输入一个整数：");
	scanf("%d",&n);
	i=1;
		while (2*i<n){
		printf("%d ",2*i);
		i=2*i;
				}
		return 0;
}

