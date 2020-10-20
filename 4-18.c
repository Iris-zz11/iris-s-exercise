#include <stdio.h>
int main(void)
{
	int n;
	int i;
	printf("显示多少个*：");
	scanf("%d",&n);
	if (n>=5)
	{
			for(i=n/5;i>0;i--){
			printf("*****\n");
					}
		int a;
		a=n%5;
		do{
					putchar('*');
					a--;
				}while(a>0);
	}
	else 
		do{
			putchar('*');
			n--;
		}while(n>0);
	printf("\n");
	return 0;
}

