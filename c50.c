#include <stdio.h>
#include <math.h>
long num[16777216];
int M, N, TOL;
long matrix[1001][1001];
int main() 
{
    	scanf("%d %d %d", &M, &N, &TOL);
    	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
	    		long n;
	    		scanf("%ld", &n);
	    		num[n]++;
	    		matrix[i][j] = n;
		}
    	}
    	int count = 0;
    	int a = 0, b = 0;
    	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
	    		if (num[matrix[i][j]] == 1) {
				if (fabs(matrix[i][j] - matrix[i - 1][j - 1]) > TOL && fabs(matrix[i][j] - matrix[i - 1][j]) > TOL &&
			    			fabs(matrix[i][j] - matrix[i - 1][j + 1]) > TOL && fabs(matrix[i][j] - matrix[i][j - 1]) > TOL &&
			    			fabs(matrix[i][j] - matrix[i][j + 1]) > TOL && fabs(matrix[i][j] - matrix[i + 1][j - 1]) > TOL &&
			    			fabs(matrix[i][j] - matrix[i + 1][j]) > TOL && fabs(matrix[i][j] - matrix[i + 1][j + 1]) > TOL) {
		    			count++;
		    			a = i;
		    			b = j;
				}
	    		}
		}
    	}
    	if (count == 0) {
		printf("Not Exist");
    	} else if (count == 1) {
		printf("(%d, %d): %ld", b + 1, a + 1, matrix[a][b]);
    	} else {
		printf("Not Unique");
    	}
    	return 0;
}
