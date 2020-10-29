#include <stdio.h>
#include <math.h>
int main(void) {
        int N;
        scanf("%d", &N);
       	float maxRadius = 0;
	for (int i = 0; i < N; i++) {
		int a, b;
                float radius;
                scanf("%d %d", &a, &b);
                radius = sqrt(a * a + b * b);
	  	if (radius > maxRadius) {
	    		maxRadius = radius;
		}
    	}
	printf("%.2f", maxRadius);
    	return 0;
}
