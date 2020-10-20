#include <stdio.h>
int main(void)
{
	int n;
		int i;

	printf("数据个数：");scanf("%d",&n);
	int v[n];
	for (i=0;i<n;i++){
		printf("%d号:",i+1);scanf("%d",&v[i]);
	}
	putchar('{');
	for(i=0;i<n;i++){
		printf("%d,",v[i]);
	}
	putchar('}');
	return 0;
}
