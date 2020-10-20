#include <stdio.h>
int main(void)
{	int a, b, c, d;
	
	puts("让我们来画一个向下的金字塔。");
	printf("金字塔有几层：");	scanf("%d",&a);
	
	d = a;
	for(b = 1; b <= a; b++){
		for (c = 0; c < b; c++){
			printf(" ");
		}
		for (c = 0; c < 2*d-1; c++ ){
			printf("%d",b);
		}
		d--;
		printf("\n");			
	}

	return 0;
}


