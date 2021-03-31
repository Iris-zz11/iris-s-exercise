#include <stdio.h>
int main(void) 
{
	double wei;
	double ext = 0.2;
	double money;
	scanf("%lf",&wei);
	if (wei>30) {
		printf("fail");
	}
	else {
		if (wei<=10)
			money = wei*0.80;
		else if (wei > 10 && wei <= 20)
			money = wei * 0.75;
		else (wei > 20 && wei <= 30)
			money = wei * 0.70;
	}
	printf("%.2f",money+0.20);
	return 0;
}
