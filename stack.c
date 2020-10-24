#include<stdio.h>
#include<stdlib.h>
typedef struct
{
	int *base;
	int *top;
	int stack;
}sqs;
void init(sqs *s)
{
	s->base = (int *)malloc(100 * sizeof(int));
	s->top = s->base;
	s->stack = 100;
}
void push(sqs *s,int e)
{
	if(s->top - s->base >= s->stack){
		s->base = (int *)realloc(s->base, (s->stack + 10) * sizeof(int));
		s->top = s->base + s->stack;
		s->stack = s->stack + 10;
	}
	*(s->top) = e;
	s->top++;
}
void pop(sqs *s)
{
	if(s->top == s->base)
		return;
	while(s->top - 1 != s->base)
		printf("%d ",*--(s->top));
	printf("%d\n",*(--s->top));
}

int main(void)
{
	sqs s;
	init(&s);
	int n, m;
	printf("请输入元素个数：");
	scanf("%d",&n);
	printf("请输入%d个元素：",n);
	for(int i = 0; i < n; i++){
		scanf("%d",&m);
		push(&s,m);
	}
	Stacklen(&s);
	printf("你输入的元素为：");
	pop(&s);
	return 0;
}
