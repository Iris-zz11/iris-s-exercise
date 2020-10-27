#include <stdio.h>
#include <math.h>
int main(void)
{
	int n;
	int scr[101];
	int i,j;
	double sum=0;
	int min,max;
	while(~scanf("%d",&n) && n != 0) {
		for(i=0;i<n;i++) {
			scanf("%d",&scr[i]);
		}
		for(j=0;j<n;j++) {
			if(scr[j]>scr[j+1]){
				int temp;
				temp=scr[j];
				scr[j]=scr[j+1];
				scr[j+1]=temp;	
			}
		for(i=1;i<n-1;i++) {
			sum += scr[i];
			}
			
		}
		printf("%.2f",sum/(n-2));
		sum=0;
	}
	printf("\n");
	return 0;
}

				


