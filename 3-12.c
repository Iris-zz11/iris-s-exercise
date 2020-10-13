#include <stdio.h>
int main(void)
{
	int n;
	printf("请输入一个整数:");scanf("%d",&n);
	switch (n%2){
		case 0 : printf("该整数是偶数。");break; 
		case 1 : printf("该整数是奇数。");} 
			 return 0;
}

