#include <stdio.h>
#include <string.h>
#define N 100
int main(void)
{
	char ch[N] = {0};
	scanf("%s",&ch[N]);
	int len = strlen (ch);
	int count = 0, p = 0;
	int * cm =  int[len*2]; 
	for (int i = 0; i < len; i++)
	{
		if (count == 0) 
		{
			cm[p] = ch[i]; 
			p++;
		}
		if (ch[i - 1] != ch[i] && i != 0) 
		{
			cm[p] = count + '0'; 
			p++;
			count = 1;	
			cm[p] = ch[i]; 
			p++;
		}
		else
		{
			count++;
		}
	}
	cm[p] = count + '0';
	p++;
	for (int i = 0; i < p; i++)
	{
		printf("%c", cm[i]);
	}
	return 0;
}


