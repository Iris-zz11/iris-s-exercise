#include <stdio.h>
#include <string.h>
int main(void)
{
	int N,M;
	int i,j;
	scanf("%d %d",&N,&M);
	int scr[101];
	char rightans[101];
	char ans[101];
	int sum[101];
	for(i=0;i<M;i++){
		scanf("%d",&scr[i]);
	}
	for(i=0;i<M;i++){
		scanf("%s",&rightans[i]);
	}
	for(j=0;j<N;j++){
		for(i=0;i<M;i++){
			scanf("%s",&ans[i]);
		}
	}
	for(j=0;j<N;j++){
		for(i=0;i<M;i++){
			if (rightans[i] == ans[i]){
			sum[i] +=scr[i];
			}
		}
		printf("%d\n",sum[i]);
	}
	return 0;
}


