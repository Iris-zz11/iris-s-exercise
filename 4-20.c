#include <stdio.h>
int main(void)
{
	printf("  |");
	int a;
	int i,j;
	for(a=1;a<=9;a++)
		printf("%3d",a);
	printf("\n");
	printf("--------------------\n");
      	for(i=1;i<=9;i++){
		printf("%d |",i);
		for(j=1;j<=9;j++)
			printf("%3d",i*j);
		putchar('\n');
	}
	return 0;
}
