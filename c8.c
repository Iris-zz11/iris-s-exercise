#include <stdio.h>
int minmax(int a[],int n)
{
	int i;
	int min=0;
	int max=0;
	for(i=0;i<n;i++) {
		if(a[i]>a[i+1])
			max = a[i];
		else
			min = a[i];
	}
	return min,max;
}

int main(void)
{
	int n;
	int scr[101];
	int i,j;
	double sum=0;
	int min,max;
	double ave;
	scanf("%d",&n);
	while(n!=0) {
		for(i=0;i<n;i++) {
			scanf("%d",&scr[i]);
		}
		minmax(scr,sizeof(scr[i])-1);
		for(j=0;j<n;j++) {
			if(min != scr[j]|| max != scr[j]) {
				sum += scr[j];
			}
		}
		printf("%.2f",sum/(n-2));
		sum=0;
	}
	printf("\n");
	return 0;
}

				


