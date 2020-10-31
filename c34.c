#include <stdio.h>
int main() 
{
    	int N;
    	int aDrink = 0, bDrink = 0;
    	int aHan, aHua, bHan, bHua;
    	scanf("%d", &N);
    	for (int i = 0; i < N; i++) {
		scanf("%d %d %d %d", &aHan, &aHua, &bHan, &bHua);
		int sum = aHan + bHan;
		if (aHua == sum && bHua != sum) {
	    		bDrink++;
		} else if (bHua == sum && aHua != sum) {
	    		aDrink++;
		}
    	}
    	printf("%d %d", aDrink, bDrink);
    	return 0;
}
