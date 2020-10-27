#include<stdio.h>
int main(void)
{
	int n;
	int s[100];
	int mix;
	int i,j,x;
	int temp;        
	while((scanf("%d",&n)!=EOF)&&(n!=0))
	{
		for(i=1;i<=n;i++)       
		{
			scanf("%d",&s[i]);
		}                              
		mix=s[1];                      
		for(i=1;i<=n;i++)
		{
			if(s[i]<=mix)
			{
				mix=s[i];
				x=i;               
			}
		}  		
                temp=s[1];
                s[1]=mix;
                s[x]=temp;                         
                printf("%d",s[1]);
		for(i=2;i<=n;i++)
		{
			printf(" %d",s[i]);
		}                              
		printf("\n");
	}
	return 0;
}
