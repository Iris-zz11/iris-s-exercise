#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	int Val;
	struct node* Prev;
	struct node* Next;
}listNode;

listNode* receive(listNode* ptr,int n){
	for(int i=0;i<n;i++){
		listNode* node=(listNode*)malloc(sizeof(listNode));
		scanf("%d",&node->Val);
		node->Next = ptr;
		node->Prev = NULL;
		if (ptr != NULL)
			ptr->Prev = node;
		ptr = node;
	}
	return ptr;
}

int main(void)
{
	int n;
	int judge;
	scanf("%d",&n);
	ListNode* ptr = NULL;
	ptr = receive(ptr,n);
	//*我的想法是用strcmp比较第一个和最后一个、第二个和倒数第二个...从两边往中间靠近，如果是偶数项的话，比较n/2次,如果是奇数项的话，中间的数就不用管，只用比较（n-1）/2次，遍历的时候只要有一个strcmp（）!= 0的话，那就令judge=0,否则的话judge=1；再放在下面的if语句里去输出true or false。但是具体怎么实现，我不知道要怎么去选出来这两个结点去比较，之前写过的链表的查找好像是线性查找，从第一个开始一个一个找。判断回文链表的话，可能需要两个指针？我不太懂要怎么去表达我的想法。这题应该是只能写到这了。把中间这一部分补上之后，盲猜程序能用。不过也就是我自己的想法而已。泪目。
	


	if (judge)
		printf("true");
	else
		printf("false");
	return 0;
}

