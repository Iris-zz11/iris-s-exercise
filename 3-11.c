#include <stdio.h>
int main(void)
{
	int a,A,B;
	printf("请输入两个整数。");
	printf("整数A:");scanf("%d",&A);
	printf("整数B:");scanf("%d",&B);
	if (A>B)
       	{a=A-B;}
		else{
			a=B-A;}

	if (a<10||a==10)
	printf("它们的差小于等于10");
	else if (a>11||a==11)
		printf("它们的差大于等于11");
	return 0;
}



