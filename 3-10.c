#include  <stdio.h>

int main(void)
{
	int A,B,C;
	printf("请输入三个整数。");
	printf("整数A：\n"); scanf("%d",&A);
	printf("整数B：\n");scanf("%d",&B);
	printf("整数C:\n");scanf("%d",&C);
	if (A==B&&B==C)
		printf("三个值都相等。");
	else if (A==B||B==C||A==C)
		printf("有两个值相等。");
	else 
		printf("三个值各不相同。");
	return 0;
}
