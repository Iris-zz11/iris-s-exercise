#include <stdio.h>
int main(void)
{
	int n;
	int i=0;
	printf("正整数：");
	scanf("%d",&n);
	while(i<n){
		if(++i%2)

		putchar('+');
		else 
			putchar('-');
		
	}
	return 0;
}


