#include "linklist.h"
#include <stdlib.h>
#include <string.h>

tDataNode *FindCmd(tDataNode* head,char* cmd){
	tDataNode *temp;
	if(head==NULL||cmd==NULL)
			{
				printf("there is no comand resource!");
				return NULL;
			}
			temp=head;
			while(temp!=NULL)
			{
				if(0==strcmp(temp->cmd,cmd))
					return temp;
				temp=temp->next;															}																			    printf("sorry,no such command~\n");
			return NULL;
}
