#include<stdio.h>
#include <string.h>
int main(void)
{
	int a[10],b,sum=0,i,j=0;
	char c[1000];
	gets(c);
    	for(i=0;i<strlen(c);i++)
    	{
		sum=sum+c[i]-48;
	}
	i=0;
	while(sum>0)
	{
		a[i]=sum%10;
		sum=sum/10;
		i++;
		j++;
	} 
	for(i=j-1;i>=0;i--)
	{
		switch(a[i])
		{
			case 1:
				printf("yi");
				break;
			case 2:
				printf("er");
				break;
			case 3:
				printf("san");
				break;
			case 4:
				printf("si");
				break;
			case 5:
				printf("wu");
				break;
			case 6:
				printf("liu");
				break;
			case 7:
				printf("qi");
				break;
			case 8:
				printf("ba");
				break;
			case 9:
				printf("jiu");
				break;
			case 0:
				printf("ling");
				break;
		}
		if(i>0)
		{
			printf(" ");
		}
	}
	return 0;
} 
