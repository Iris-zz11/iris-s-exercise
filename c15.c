#include<stdio.h>
int main(void)
{
	int T;
	int a[1000];
	int i,j=0;
	while(scanf("%d",&a[j])!=EOF)
			 j++;    
	for(i=0;i<j;i++)
	   		 printf("%c",a[i]);
	return 0;
}

