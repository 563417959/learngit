#include <malloc.h>
#include <stdlib.h>
#include "linklist.c"
#define CMD_MAX_LENGTH 128

tDataNode* CreateDataNodeLink();
int HelpFunc();
int HelloFunc();
int QuitFunc();
int GreaterFunc();
int SmallerFunc();
int PlusFunc();
int MinusFunc();
int MultiplyFunc();
static char* CmdName[] =
{
	"help",
	"hello",
	"quit",
	"greater",
	"smaller",
	"plus",
	"minus",
	"multiply"
};
static char* Descinfo[] = 
{
	"show help",
	"show hello",
	"quit menu program"
	"greater number",
	"smaller number",
	"return a+b",
	"return a-b",
	"return a*b"
};
static int (*FuncName[])() = 
{
	HelpFunc,
	HelloFunc,
	QuitFunc,
	GreaterFunc,
	SmallerFunc,
	PlusFunc,
	MinusFunc,
	MultiplyFunc
};
