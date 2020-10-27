#include <stdio.h>
int main(void)
{
	int m,n;
	int i,j;
	double sum1,sum2;
	int cnt=0;
	while(~scanf("%d%d",&n,&m)&&n<=50&&m<=5)
	{
                int sc[51][6]; 
		int s1[51],s2[6];

		for(i=0;i<n;i++) {
			for(j=0;j<m;j++)	
			        scanf("%d",&sc[i][j]);
		}
		printf("\n");
		for(i=n;i>0;i--) {
			for(j=m;j>0;j--) {
				sum1 += s2[j];
				printf("%.2f",sum1/m);
			}
		}
		printf("\n");
		for(j=m;j>0;j--) {
			for(i=n;i>0;i--) {
				sum2 += s1[i];
				printf("%.2f",sum2/n);
			}
		}
		for(i+0;i<n;i++) {
			for(j=0;j<m;j++) {
				if (sc[i][j]>=sum2/n) {
					cnt++;
				}
			}
		}
		printf("\n");
	}
	return 0;
}

