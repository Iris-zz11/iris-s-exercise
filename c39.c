#include <stdio.h>
int main(void)
{
	int n;
	int i;
	int sum=0;
	int a,b,c,d,e,f=1;
	int money[101];
	int x;
	while (~scanf("%d",&n) && n!=0) {
		for (i=0;i<n;i++){
			scanf("%d",&money[i]);
		}
	}
	for (i=0;i<n;i++) {
		sum += money[i] ;
	}
	a=sum/100;
	b=(sum%100)/50;
	c=(sum-a*100-b*50)/10;
	d=(sum-a*100-b*50-c*10)/5;
	e=(sum%5)/2;
	x=a+b+c+d+e+f;
	printf("%d",x);
	return 0;
}




