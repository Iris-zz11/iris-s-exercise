#include <stdio.h>
int main(void)
{
	int i,no;
	printf("请输入一个正整数：");
	scanf("%d",&no);
	i=1;
	while(i<=no)
			printf("%d ",i++);
	
	
	return 0;
}

