#include<stdio.h>
int main()
{
	int year,month,day;
	int sum=0;
	int i;
	int v[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	while(~scanf("%d%d%d",&year,&month,&day)!=EOF)
	{
		if(year%400==0||year%4==0&&year%100!=0)
			v[1]=29;
		for(i=0;i<month-1;i++)
			sum+=v[i];
		printf("%d\n",sum+day);
		sum=0;
		v[1]=28;
	}
	return 0;
}

