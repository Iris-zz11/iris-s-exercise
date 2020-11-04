#include <stdio.h>
#include <string.h>
int main() 
{
    	int N;
    	scanf("%d", &N);
    	char idNum[20];
    	int allRight = 1;
    	int weight[] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2}
    	char modeM[] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
    	for (int i = 0; i < N; i++) 
	 	scanf("%s", idNum);
	int sum = 0;
	int isAllNum = 1;
        for (int j = 0; j < strlen(idNum) - 1; j++) {
    		if (idNum[j] >= '0' && idNum[j] <= '9') {
			sum += (idNum[j] - '0') * weight[j];
    		} else {
			isAllNum = 0;
			break;
    		}
	}
	if (isAllNum) {
    		int mod = sum % 11;    
		char M = modeM[mod];
    		if (M != idNum[17]) {
			allRight = 0;
			printf("%s\n", idNum);
    		}
	} else {
    		allRight = 0;
    		printf("%s\n", idNum);
	}
	if (allRight) {
		printf("All passed");
    	}
    	return 0;
}
