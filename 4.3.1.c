/*编写一程序要求任意输入四位十六进制整数，以反序的方式输出该十六进制数，例如：输入9AF0,则输出0FA9*/
#include<stdio.h>
#include<math.h>
int main()
{
	unsigned short a,b;
	printf("请输入一个四位的十六进制整数：");

	scanf("%04X",&a);
	b = (a&0x000F)<<12; //取a的最第一位十六进制数并向左移12位后复制给b
	b += (a&0x00F0)<<4;
	b += (a&0x0F00)>>4;
	b += (a&0xF000)>>12;
	printf("处理后的结果为：%4X\n",b);
}
