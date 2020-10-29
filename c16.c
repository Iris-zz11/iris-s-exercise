#include <stdio.h>
#include <string.h>
int main(void)
{
	int n;
	char str[101];
	int cnt1=cnt2=cnt3=cnt4=cnt5=0;

	while(~scanf("%d",&n)&&n>0)
	{
		int i;
		for(i=0;i<n;i++)
		{
			int a;
			for(a=0;a<101;a++){
				scanf("%s",str[a]);
			if(str[a]=='a')
				cnt1++;
			if(str[a]=='e')
				cnt2++;
			if(str[a]=='i')
				cnt3++;
			if(str[a]=='o')
				cnt4++;
			else if(str[a]=='u')
				cnt5++;
			}
			printf("a:%d\n",cnt1);
			printf("e:%d\n",cnt2);
			printf("i:%d\n",cnt3);
			printf("o:%d\n",cnt4);
			printf("u:%d\n",cnt5);
		}
	}
	return 0;
}
			



