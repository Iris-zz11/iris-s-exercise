#include <stdio.h>
#include <string.h>
int main() 
{
    	int n, k, j, l;
    	scanf("%d", &n);
    	if (n < 10) {
		for (int i = 1; i <= n; i++) {
	    		printf("%d", i);
		}
    	} else if (10 <= n && n < 100) {
		j = n / 10;
		l = n % 10;
		for (int i = 0; i < j; i++) {
	    		printf("S");
		}
		for (int i = 1; i <= l; i++) {
	    		printf("%d", i);
		}
    	} else if (100 <= n && n < 1000) {
		k = n / 100;
		j = (n / 10) % 10;
		l = n % 10;
		for (int i = 0; i < k; i++) {
	    		printf("B");
		}
		for (int i = 0; i < j; i++) {
	    		printf("S");
		}
		for (int i = 1; i <= l; i++) {
	    		printf("%d", i);
		}
    	}
	return 0;
}
