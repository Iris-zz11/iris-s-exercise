#include <stdio.h>
int main() 
{
    	int N;
    	scanf("%d", &N);
    	char a, b;
    	int aWin = 0;
    	int aPing = 0;
    	int aLost = 0;
    	int aWinB = 0;
    	int aWinC = 0;
    	int aWinJ = 0;
    	int aWinMax;
    	char aMaxChar;

    	int bWin = 0;
    	int bPing = 0;
    	int bLost = 0;
    	int bWinB = 0;
    	int bWinC = 0;
    	int bWinJ = 0;
    	int bWinMax;
    	int bMaxChar;

    	for (int i = 0; i < N; i++) {
		getchar();
		scanf("%c %c", &a, &b);
		if (a == 'B') {
	    		if (b == 'C') {
				aWin++;
				aWinB++;
				bLost++;
	    		} else if (b == 'J') {
				aLost++;
		 		bWin++;
				bWinJ++;
	    		} else {
				aPing++;
				bPing++;
	    		}
		} else if (a == 'C') {
	    		if (b == 'J') {
				aWin++;
				aWinC++;
				bLost++;
	    		} else if (b == 'B') {
				aLost++;
				bWin++;
				bWinB++;
	    		} else {
				aPing++;
				bPing++;
	    		}
		} else if (a == 'J') {
	    		if (b == 'B') {
				aWin++;
				aWinJ++;
				bLost++;
	    		} else if (b == 'C') {
				aLost++;
				bWin++;
				bWinC++;
	    		} else {
				aPing++;
				bPing++;
	    		}
		}    }

    	printf("%d %d %d\n", aWin, aPing, aLost);
    	printf("%d %d %d\n", bWin, bPing, bLost);

    	aWinMax = aWinB;
    	aMaxChar = 'B';
    	if (aWinC > aWinMax) {
		aWinMax = aWinC;
		aMaxChar = 'C';
    	}
    	if (aWinJ > aWinMax) {
		aWinMax = aWinJ;
		aMaxChar = 'J';
    	}

    	bWinMax = bWinB;
    	bMaxChar = 'B';
    	if (bWinC > bWinMax) {
		bWinMax = bWinC;
		bMaxChar = 'C';
    	}
    	if (bWinJ > bWinMax) {
		bWinMax = bWinJ;
		bMaxChar = 'J';
    	}

    	printf("%c %c", aMaxChar, bMaxChar);
    	return 0;
}
