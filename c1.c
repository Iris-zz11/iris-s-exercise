#include <stdio.h>
int main(void)
{
	int a,b,c;
	scanf("%d",&a);scanf("%d",&b);scanf("%d",&c);
	if(a+b>=c&&a+c>=b&&b+c>=a)
	{
		if(a==b && b==c)
			printf("1");
		else if (a==b || b==c || a==c)
			printf("2");
		else 
			printf("3");
	}
	else
		printf("0");
	return 0;
}


