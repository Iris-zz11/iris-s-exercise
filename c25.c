#include <stdio.h>
#include <math.h>
int main() 
{
    	double R1, P1, R2, P2;
    	scanf("%lf %lf %lf %lf", &R1, &P1, &R2, &P2);
    	double A1, B1, A2, B2, A, B;
    	A1 = R1 * cos(P1);    B1 = R1 * sin(P1);
    	A2 = R2 * cos(P2);    B2 = R2 * sin(P2);
    	A = A1 * A2 - B1 * B2;	B = A1 * B2 + B1 * A2;
    	if (fabs(A) < 0.01) {
	    	A = 0;
       	}
      	if (fabs(B) < 0.01) {
	     	B = 0;
      	}
    	if (B >= 0) {
		printf("%.2lf+%.2lfi", A, B);
    	} else {
		printf("%.2lf%.2lfi", A, B);
    	}
    	return 0;
}
