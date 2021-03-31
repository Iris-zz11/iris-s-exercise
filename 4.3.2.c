//交换a和b的值，不借助其他变量//
#include<stdio.h>
int main()
{
	int a , b;
	printf("请输入a和b的值（a,b）：\n");
	scanf("%d,%d",&a,&b);
	a = a+b;
	b = a-b;
	a = a-b;
	printf("此时a和b的值分别为：%d,%d",a,b);
}



