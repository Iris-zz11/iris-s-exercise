#include <stdio.h>
int main(void)
{
	int a,b;
	int i,j;

	printf("让我们来画一个长方形。");
	printf("一边：");scanf("%d",&a);
	printf("另一边：");scanf("%d",&b);
	int max,min;
	if(a>=b){
		max=a;
		min=b;}
	
	else{
		max=b;
		min=a;}
	for(i=1;i<=max;i++){
		for(j=1;j<=min;j++)
			putchar('*');
		putchar('\n');
	}
	putchar('\n');
	return 0;
}
	

