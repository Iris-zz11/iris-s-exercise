#include <stdio.h>
int main(void)
{
	int a,b;
	int sum=0;
	int i;
	printf("请输入两个整数。\n");
	printf("整数a:");scanf("%d",&a);
	printf("整数b:");scanf("%d",&b);
	if (a>=b) { i=b;
		do {
		sum +=i;
		i++;}while (i<=a);
		
	printf("大于等于%d小于等于%d的所有整数和是%d。",b,a,sum);
	}
	else { i=a;
		do {
			sum +=i;
			i++;}while (i<=b);
	
	printf("大于等于%d小于等于%d的所有整数和是%d。",a,b,sum);
	}
	return 0;
}


