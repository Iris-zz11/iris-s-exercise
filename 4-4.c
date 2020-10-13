#include <stdio.h>
int main(void)
{
	int n;
	printf("请输入一个正整数:");
	scanf("%d",&n);
	while(n>=1){
		printf("%d ",n);
		n--;
	}
	return 0;
}

