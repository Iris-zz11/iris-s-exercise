#include <stdio.h>
int main() 
{
    	int N;
    	int friendCount[37] = {0};
    	scanf("%d", &N);
    	for (int i = 0; i < N; i++) {
		int num;
		int friend = 0;
		scanf("%d", &num);
		while (num) {
	    		friend += num % 10;
			num = num / 10;
		}
		friendCount[friend]++;
	}
    	int total = 0;
    	for (int j = 0; j < 37; j++) {
		if (friendCount[j]) {
	    		total++;
		}
    	}
    	printf("%d\n", total);
    	for (int k = 0; k < 37; k++) {
		if (friendCount[k]) {
	    		if (total != 1) {
				printf("%d ", k);
				total--;
	    		} else {
				printf("%d", k);
	    		}
		}
    	}
    	return 0;
}
