#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

void Help();
void Openfile();
void Savefile();
void Closefile();
void Find();
void Error();
void Delete();
void List();
void Print();

int main()
{
	char cmd[100];
	while(1)
		{
			scanf("%s",cmd);
			if(!strcmp(cmd, "help"))
			{
				Help();
			}
			else if(!strcmp(cmd, "openFile"))
			{
				Openfile();
			}
			else if(!strcmp(cmd, "closefile"))
			{
				Closefile();
			}
			else if(!strcmp(cmd, "savefile"))
			{
				Savefile();
			}
			else if(!strcmp(cmd, "find"))
			{
				Find();
			}
			else if(!strcmp(cmd, "delete"))
			{
				Delete();
			}
			else if(!strcmp(cmd, "list"))
			{
				List();
			}
			else
			{
				Error();
			}
		}
		return(0);
}

void Print()
{
	 printf("----------------MENU-----------------\n");
}

void Help()
{
	Print();
	printf("-openfile\n");
	printf("-closefile\n");
	printf("-savefile\n");
	printf("-find\n");
	printf("-delete\n");
	printf("-list\n");
	printf("-find\n");
}

void Openfile()
{
	Print();
	printf("File opened\n");
}

void Closefile()
{
	Print();
	printf("file closed\n");
}

void Savefile()
{
	Print();
	printf("The file is saved\n");
}

void Delete()
{
	Print();
	printf("The file hai been delete\n");
}
void List()
{
	Print();
	printf(" files under the  directory\n");
}
void Find()
{
	Print();
	printf("The file has been found\n");
}
void Error()
{
	printf("ERROR!!!\n");
}
