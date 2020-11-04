#include <stdio.h>
int main() 
{
    	int N;
    	scanf("%d", &N);
    	int sum[100001] = {0};
    	int maxNum = 0;
    	for (int i = 0; i < N; i++) {
		int num, grade;
		scanf("%d %d", &num, &grade);
		sum[num] += grade;
		if (sum[num] > sum[maxNum]) {
	    		maxNum = num;
		}
    	}
    	printf("%d %d", maxNum, sum[maxNum]);
    	return 0;
}


