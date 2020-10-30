#include <stdio.h>
int main(void) 
{
    	double C1, C2;
    	int C3;
    	int hh, mm, ss;
    	scanf("%lf %lf", &C1, &C2);
    	C3 = (int) ((C2 - C1) / 100.0 + 0.5);
       	hh = C3 / 3600;
    	mm = (C3 % 3600) / 60;
    	ss = C3 % 60;
    	printf("%02d:%02d:%02d", hh, mm, ss);
    	return 0;
}


