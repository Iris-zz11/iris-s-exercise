#include <stdio.h>
int isPrime(int a) {
	for (int i = 2; i * i <= a; i++) {
	       	if (a % i == 0) {
			return 0;
		}
	}
	return 1;
}

int main(void) {
	int M, N;
        scanf("%d %d", &M, &N);
        int prime[10001];
        int count = 1;
        int n = 2;
        while (count <= N) {
		if (isPrime(n)) {
			prime[count] = n;
			count++;
		}
		n++;
	}
	int printCount = 1;
       	int needPrint = N - M + 1;
	for (int i = M; i <= N; i++) {
		printf("%d", prime[i]);
	       	if (printCount != needPrint) {
			if (printCount % 10 != 0) {
				printf(" ")
			} else {
				printf("\n");
			}
		}
		printCount++;
	}
	return 0;
}
