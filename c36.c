#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct Birthdays {
    	char name[6];
    	char date[11];
} Birthday;

int cmpDay(const void *a, const void *b) {
    	Birthday A = *(Birthday *) a;
    	Birthday B = *(Birthday *) b;
    	return strcmp(A.date, B.date);
}

int main() {
     	int N;
    	scanf("%d", &N);
    	Birthday birthday[N];
    	int nt= 0;
    	char name[6];
    	char date[11];
    	for (int i = 0; i < N; i++) {
		scanf("%s %s", name, date);
		if (strcmp(date, "2014/09/06") <= 0 
				&& strcmp("1814/09/06", date) <= 0) 
		{
	    		strcpy(birthday[validCount].name, name);
	    		strcpy(birthday[validCount].date, date);
	    		cnt++;
		}
    	}
    	qsort(birthday, validCount, sizeof(birthday[0]), cmpDay);
    	if (cnt) {
		printf("%d %s %s", cnt, birthday[0].name, birthday[validCount - 1].name);
    	} else {
		printf("0");
    	}
}



