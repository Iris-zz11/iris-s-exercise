#include <stdio.h>
int main(void)
{
	int m;
	int n;
	int key=1;
	double sum=0.00;
	scanf("%d",&m);
	while(m>0)
	{
		m--;
		scanf("%d",&n);
		for( int i=0;i<n;i++) {
			sum += key / (double) i;
			key *= -1;
		}
		printf("%.2lf\n",sum);
	}
	return 0;
}
			

			
