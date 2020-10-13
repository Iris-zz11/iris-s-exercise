#include <stdio.h>
int main(void)
{
	int month;
	printf("请输入月份：");
	scanf("%d",&month);
	switch (month) {
		case 3: printf("%d月是春天。",month);
			       break;
		case 4 :printf("%d月是春天。",month);break;
		case 5 :printf("%d月是春天。",month);break;
		case 6:printf("%d月是夏天。",month);break;

		case 7 :printf("%d月是夏天。",month);break;
		case 8 :printf("%d月是夏天。",month);break;

		case 9 :printf("%d月是秋天。",month);break;
		case 10:printf("%d月是秋天。",month);break;
		case 11:printf("%d月是秋天。",month);break;
		case 12:printf("%d月是冬天。",month);break;
		case 1:printf("%d月是冬天。",month);break;
		case 2:printf("%d月是冬天。",month);
		

	}
	return 0 ;
}
			       
