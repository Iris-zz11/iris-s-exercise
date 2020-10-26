#include <stdio.h>
#include <math.h>
int main(void)
{
	int n;
        int i,j,k;
	int a[101];
	scanf("%d",&n);
	while(n != 0) {
		for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		}
		for (j = 0; j < n; j++) {
			int k = j;
			int tem = a[j];
			for (i = j; i < n; i++) {
				if (fabs(tem) < fabs(a[i])) {
					tem = a[i];
					k = i;
				}
			}
			a[k] = a[j];
			a[j] = tem;
		}

		for(i=0;i<n-1;i++){
			if (i !=n)
				printf("%d ",a[i]);
			else
				printf("%d\n",a[i]);
		}
	}

	return 0;
}
	

