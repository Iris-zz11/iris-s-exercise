#include <stdio.h>
int main(void)
{
	int i=1;
	int n;
	printf("正整数：");
	scanf("%d",&n);
	while(i<=n){
		printf("*\n",i++);
	}
	return 0;
}
