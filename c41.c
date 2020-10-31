#include <stdio.h>
#include <string.h>
int main() 
{
    	char ascCount[129] = {0};
    	char str[1001];
    	int maxIndex = 0;
    	gets(str);
    	for (int i = 0; i < strlen(str); i++) 
	{
	    	for (int j = 'A'; j <= 'Z'; j++) {
			if (str[i] == j) {
				ascCount[j + 32]++;
				break;
	    		}
		}
		for (int j = 'a'; j <= 'z'; j++) {
	    		if (str[i] == j) {
				ascCount[j]++;
				break;
	    		}
		}
    	}
    	for (int k = 'a'; k <= 'z'; k++) {
		if (ascCount[k] > ascCount[maxIndex]) {
	    		maxIndex = k;
		}
    	}
    	printf("%c %d", maxIndex, ascCount[maxIndex]);
    	return 0;
}
