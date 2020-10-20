#include <stdio.h>
int main(void)
{
	int i;
	int a,b,c;
	printf("开始数值（cm）:");scanf("%d",&a);
	printf("结束数值（cm):");scanf("%d",&b);
	printf("间隔数值（cm):");scanf("%d",&c);
	for (i=a;a<=b;a+=c)
			{
			printf("%dcm    %.2fkg\n",a-c,(a-c-100)*0.9);}
			return 0;
			}
