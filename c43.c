#include <stdio.h>
int main(void)
{
	int M,N,A,B,replace;
	int i,j;
	scanf("%d %d %d %d %d",&M,&N,&A,&B,&replace);
	int v[M][N];
	for(i=0;i<M;i++){
		for(j=0;j<N;j++){
			scanf("%d %d",&v[i][j]);
		}
	}
	for(i=0;i<M;i++) {
		for(j=0;j<M;j++) {
			if(v[i][j]<=A || v[i][j]>=B) {
				printf("%03d",v[i][j]);
			}
			else {
				v[i][j]=0;
				printf("%03d",v[i][j]);
			}
		}
	}
	return 0;
}



