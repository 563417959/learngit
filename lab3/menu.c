#include "menu.h"
tDataNode* CreateDataNodeLink()
{
	int count ,i;
	tDataNode *head ,*tail ,*temp;
	count = sizeof(CmdName)/sizeof(CmdName[0]);
	head = (tDataNode *)malloc(sizeof(tDataNode));
	head->cmd = CmdName[0];
	head->desc = Descinfo[0];
	head->handler = FuncName[0];
	tail = head;
	for (i = 1 ; i < count ; i++ )
	{
		temp = (tDataNode *)malloc(sizeof(tDataNode));
		temp ->cmd = CmdName[i];
		temp->desc = Descinfo[i];														temp->handler = FuncName[i];
		temp->next = NULL;
		tail ->next = temp;
		tail = tail ->next;															}																			    return head;
}

void main()
{
	char cmd[128];
	tDataNode *head ,*p;
	head = CreateDataNodeLink();
	while(1)
	{
		printf("Menu->\n");
		scanf("%s", cmd);
		p = FindCmd(head,cmd);
		if (p == NULL)
			continue;															        if (p->handler != NULL)
			{
				p->handler();																}																		}
}

int HelpFunc()
{
	printf("This is help!\n");
	return 1;
}

int HelloFunc()
{
	printf("Hello! You are the best!\n"); 
	return 1;
}

int QuitFunc()
{
	exit(0);
	return 1;
}

int GreaterFunc()
{
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	c=a>b?a:b;
	printf("The greater one is %d\n",c);
	return 1;
}

int SmallerFunc()
{
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	c=a>b?b:a;
	printf("The smaller one is %d\n",c);
	return 1;
}

int PlusFunc()
{
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	c=a+b;
	printf("The result is %d\n",c);
	return 1;
}

int MinusFunc()
{
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	c=a-b;
	printf("The result is %d\n",c);
	return 1;
}  

int MultiplyFunc()
{
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	c=a*b;
	printf("The result is %d\n",c);
	return 1;
}
