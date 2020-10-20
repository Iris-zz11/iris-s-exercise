#include <stdio.h>
int main(void)
{
	int n;
	int i;
	printf("n的值是：");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		printf("%d的二次方是%d\n",i,i*i);
	return 0;
}
