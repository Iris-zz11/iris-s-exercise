#include <stdio.h>
#include <stdlib.h>
int main()
{
    	int n,cnt,i,j;
    	double a[100],max;
    	while(~scanf("%d",&cnt))
    	{
		for(j=0;j<cnt;j++)
		{
			max=0;
			scanf("%d",&n);
			for(i=0;i<n;i++)
			{
		    		scanf("%lf",&a[i]);
			}
			for(i=0;i<n;i++)
			{
		    		if(a[i]>max)
					max=a[i];
			}
			printf("%.2lf\n",max);
	    	}
	}
    	return 0;
} 
