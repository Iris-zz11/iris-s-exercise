#include<stdio.h>
int main(void)
{
	int i=2,j;
	printf("%d",i);
	for(i;i<100;i++){
		for(j=2;j<i;j++){
			if(i%j==0){
				break;
			}else if(i-1==j){
				printf("%-3d",i);
			}
		}
	}
	return 0;
}
