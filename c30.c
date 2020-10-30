#include <stdio.h>
#include <stdlib.h>
int main()
{
     	long long int a,b;
    	int n;
    	scanf("%d",&n);
    	while(n--)
    	{
		scanf("%I64d%I64d",&a,&b);
		if(a%b==0)printf("YES\n");
		else printf("NO\n");
    	}
    	return 0;
} 
