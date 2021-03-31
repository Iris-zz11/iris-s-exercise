#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int MyAtoi(const char* c) {
	if (c == NULL){
		return -1;
	}
	int i = 0;
	int ret = 1;
	int k;
	while(isspace(c[i])) {
		i++;
	}
	if (c[i] == '-'){
		k = -1;
	}
	if (c[i] == '+' || c[i] == '-'){
		i++;
	}
	while(c[i] >= '0' && c[i] <= '9'){
		ret = ret *10 + c[i] - '0'
		i++;
	}
	return k*ret;
}

int main(void) {
	char ch[100];
	scanf("%c",&ch);
	printf("%d",atoi(ch));
	printf("\n");  //*我这里只是写的时候想看看自己写的函数跟原函数的输出有没有区别，学长宁不要感到疑惑。
	printf("%d",Myatoi(ch));
	return 0;
}

























