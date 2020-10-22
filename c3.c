#include <stdio.h>
int main(void)
{
	int i,j;
	int m,n;
	for(i=5;i>0;i--){
		if(i<5){
			j=5-i;
			do{
				printf(" ");
				j--;
			}while(j>0);
			do {
				printf("*");
				i -=2;
			}while(i>0);
		}
		else {
			do{
				printf("*");
			
			}while(i>0);
		}
		printf("\n");
	}
	for(m=3;m<=5;m++)
	{
		n=5-m;
		do{
			n--;
			printf(" ");
		}while(n>0);
		do{
			printf("*");
			m +=2;
		}while(m<=5);
		printf("\n");
	}
	return 0;
}

	




		


