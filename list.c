#include <stdio.h>
#include <stdliib.h>
#include <string.h>
struct Node
{
	int a;
	struct Node* next;
};
struct Node* head= NULL;
struct Node* end = NULL;
void AddListTill(int a )
{
	
		struct Node* temp=(struct Node*)malloc(sizeof(struct Node));	

	
		temp->a=a;
		temp->next=NULL;		
		

		if(NULL==head)
		{	

			head=temp;
	
		}
		else
		{
		end->next=temp;
		}
		end=temp;	
}
//*查找
 void ScanList()
{
	struct Node *temp =head;
	while (temp !=NULL)
	{
		printf("%d\n",temp->a);
		temp = temp->next;
	}

}
struct Node* FindNode(int a )
{
	struct Node *temp =head;
	while(temp !=NULL)
	{
	if(a == temp->a)
	{
		return temp;
	}
	temp = temp->next;
	}

		return NULL;
} 
//*插入
void AddListRand(int index,int a)
{	

    if (NULL==head)
	{
		printf("链表没有节点\n");
		return;
	}	
    struct Node* pt =FindNode(index);
	if(NULL==pt)   
	{
		printf("没有指定节点\n");
		return;
	}
   	struct Node* temp =(struct Node *)malloc(sizeof(struct Node));
	temp->a=a;
	temp->next=NULL;
	if (pt == end)
	{
	end->next=temp;
	end=temp;
	}else
	{
	temp->next=pt->next;
	pt->next=temp;
	}

}
//*删除

void DeleteListRand(int a)
{


	if(NULL==head)
	{
	printf("链表没东西\n");
	return;
	}
    
	struct Node* temp =FindNode(a);
	if(NULL==temp)
	{
	printf("查无此点\n");
	return;
	}
	
	if(head==end)
	{
	free(head);
	head=NULL;
	end=NULL;
	}
	else if(head->next==end) 
	{
	
	if(end==temp)
		{	DeleteListTail(); }
	else if(temp==head)
		{	DeleteListHead(); }	
	}
	else
	{
		
		if(end==temp)
			DeleteListTail();
		else if(temp==head)
			DeleteListHead();	
		else	
		{	
			struct Node*pt =head;
			while(pt->next!=temp)
			{
			pt=pt->next;
			}
			 pt->next=temp->next;
			 free(temp);
		
		}
	}
	

}
