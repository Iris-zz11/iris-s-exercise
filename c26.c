#include<stdio.h> 
int main(){
	int a,b;
	int t;
	while(~scanf("%d %d",&a,&b))
	{
		int a1=a;
		int b1=b;
		while(b !=0){
			t=a%b;
			a=b;
			b=t;
		}
		printf("%.0f\n",a1*b1*1.0/a);
	}
	return 0;
}
