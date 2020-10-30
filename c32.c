#include <stdio.h>
int main() {
    	int N = 0;
    	char sign;
	scanf("%d %c", &N, &sign);
       	int row = (N + 1) / 2;
       	for (int i = 0; i < row; i++) {
	       	if (i == 0) {
	    		for (int j = 0; j < N; j++) {
                printf("%c", sign);
            }
            printf("\n");
        } else if (i == row - 1) {
            for (int j = 0; j < N; j++) {
                printf("%c", sign);
            }
        } else {
            printf("%c", sign);
            for (int j = 1; j < N - 1; j++) {
                printf(" ");
            }
            printf("%c\n", sign);
        }
    }

    return 0;
}
