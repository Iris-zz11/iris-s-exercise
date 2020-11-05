#include <stdio.h>
#include <string.h>
int main() 
{
    	char input[81];
    	char output[81];
    	int alreadyPrint[128] = {0};
    	gets(input);    gets(output);
    	for (int i = 0; i < strlen(input); i++) {
		int has = 0;
		for (int j = 0; j < strlen(output); j++) {
	    		if (output[j] == input[i]) {
				has = 1;
				break;
	    		}
		}
		if (!has) {
	    		if (input[i] >= 'a' && input[i] <= 'z') {
				input[i] = input[i] + 'A' - 'a';
	    		}
	    		if (!alreadyPrint[input[i]]) {
				putchar(input[i]);
				alreadyPrint[input[i]] = 1;
	    		}
		}
    	}
    	return 0;
}
