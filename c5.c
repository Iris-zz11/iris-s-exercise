/*打印出1~100以内的素数，每五个数字一行。*/
#include <stdio.h>
int main(void)
{
	int i;
	int n=0;
	for(i=1;i<=100;i++){
		if(i==2||i==3)
		{
			printf("%d ",i);
			n++;
		}
		for (int j=2;j<=i/2;j++)
		{
			if (i%j==0)
				break;
			if(i/2==j)
			{
				printf("%d ",i);
				n++;
			}
			if (5==n)
			{
				n=0;
				printf("\n");
			}
		}
	}
return 0;
}
		
