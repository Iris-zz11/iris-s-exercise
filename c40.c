#include <stdio.h>
int main(void)
{
	int T, K;
    	scanf("%d %d", &T, &K);
    	for (int i = 0; i < K; ++i) {
		int n1, b, t, n2;
		scanf("%d %d %d %d", &n1, &b, &t, &n2);
		if (T < t) {
	    		printf("Not enough tokens.  Total = %d.", T);
	    		if (i != K - 1) {
				printf("\n");
	    		}
	    		continue;
		}
		if (b) {
	    		if (n2 > n1) {
				T = T + t;
				printf("Win %d!  Total = %d.", t, T);
	    		} else {
				T = T - t;
				printf("Lose %d.  Total = %d.", t, T);
	    		}
		} else {
	    		if (n2 < n1) {
				T = T + t;
				printf("Win %d!  Total = %d.", t, T);
	    		} else {
				T = T - t;
				printf("Lose %d.  Total = %d.", t, T);
	    		}
		}
		if (i != K - 1) {
	    		printf("\n");
		}
		if (T == 0) {
	    		printf("Game Over.");
	    		break;
		}
    	}
    	return 0;
}
