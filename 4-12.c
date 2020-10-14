#include <stdio.h>
int main(void)
{
	int no;
	int i;
	do {
		printf("请输入一个正整数：");
		scanf("%d",&no);
		if (no<=0)
	printf("\a请输入一个正整数。");
	}while (no<=0);
	printf("%d的位数是",no);
	while (no>0){
		no /=10;
	i +=1;
	}

	printf("%d。",i);
	return 0;
}
