#include <stdio.h>
int main(void)
{
	int i=1;
	    int n,a;
	printf("请输入一个整数：");
	scanf("%d",&n);
	for (a=n/10;a>=1;a--){
		printf("1234567890");}
	int no;
	no=n%10;
	while(i<=no)
		printf("%d",i++);
	return 0;
}

