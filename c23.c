#include <stdio.h>
#include <string.h>
{
	char strN[1001];
    	scanf("%s", strN);
    	int count[11] = {0};
    	for (int i = 0; i < strlen(strN); i++) {
		switch (strN[i]) {
	    		case '0':
				count[0]++;
				break;
	    		case '1':
				count[1]++;
				break;
	    		case '2':
				count[2]++;
				break;
	    		case '3':
				count[3]++;
				break;
	    		case '4':
				count[4]++;
				break;
	    		case '5':
				count[5]++;
				break;
	    		case '6':
				count[6]++;
				break;
	    		case '7':
				count[7]++;
				break;
	    		case '8':
				count[8]++;
				break;
	    		case '9':
				count[9]++;
				break;
	    		default:
				break;

		}
    	}
	for (int j = 0; j < 10; j++) {
		if (count[j]) {
            printf("%d:%d\n", j, count[j]);
	     	}
    	}
    	return 0;
}
	
