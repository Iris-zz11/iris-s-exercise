#include <stdio.h>
#define NUMBER 100
int main(void)
{
	int n;
	int a[NUMBER];
	int i;
	scanf("%d",&n);
	while(n != 0) {
		for(i=0;i<n;i++) {
			scanf("%d",&a[i]);
		}
		int pro=1;
		for(i=0;i<n;i++) {

		if (a[i]%2 == 0) {
			pro = pro;
		}
		else {
			pro *= a[i];
		}
		}
		printf("%d\n",pro);
		
	}
	return 0;
}


