#include <stdio.h>
int main() 
{
    	int N;
    	scanf("%d", &N);
    	int a[N];
    	int sum = 0;
    	for (int i = 0; i < N; i++) {
		scanf("%d", &a[i]);
    	}

    	for (int j = 0; j < N; j++) {
	    	for (int i = 0; i < N; i++) {
		   	if (i == j) {
				continue;
	    		}
	    		sum += a[i] * 10 + a[j];
		}
    	}
    	printf("%d", sum);
    	return 0;
}
