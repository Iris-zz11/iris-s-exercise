//从键盘输入r做为半径，求该圆的周长和面积//
#include<stdio.h>
#define PI  3.1416
int main()
{
	float r;
	float l,s;
	printf("请输入一个数：\n");
	scanf("%f",&r);
	l = 2*PI*r;
	s = r*r*PI;
	printf("该圆的周长为%f,面积为%f\n",l,s);
}


