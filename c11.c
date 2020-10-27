#include<stdio.h>
int main(void)
{
	int m,n;
        int i,j;
        while(scanf("%d%d",&n,&m)!=EOF&&(n!=0||m!=0))
	{
		int a[100001];
                for(i=0;i<n;i++)
 			scanf("%d",&a[i]);
		for(i=0;i<m;i++){
                        j=i+1;
                        while(j<n){
				if(a[i]<a[j]){
				   	int temp;
                                        temp=a[i];
                                        a[i]=a[j];
                                        a[j]=temp;
				}
                                j++;
			}
		}
	      	if(n>=m){
			for(i=0;i<m;i++)
			     	printf("%d ",a[i]);
		}
                else{
                        for(i=0;i<n;i++)
                                printf("%d ",a[i]);
		}
                printf("\n");
	}
	return 0;

}
