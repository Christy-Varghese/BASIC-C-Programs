#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

char st[20];
int top=-1;
void push(char x)
	st[++top]=x;
char pop()
{
	if(top==-1)
		return -1;
	else 
		return st[top--];
}
int prior(char x)
{
	if(x=='('||x==')')
		return 0;
	if(x=='+'||x=='-')
		return 1;
	if(x=='*'||x=='/')
		return 2;
	if(x=='^')
		return 3;
}

void main()
{
	char exp[20];
	char *e , x;
	printf("\n Enter the expersion::");
	scanf("%s",exp);
	e=exp;
	while(*e != '\0')
	{
		if( isalnum(*e))
			printf("%c",*e)
		else if(*e == '(')
			push(*e);
		else if(*e == ')')
		{
			while(x=pop() != '(')
				printf("%c",x);
		}
		else
		{
			while(prior(st[top])>=prior(st[*e])
				printf("%c",pop[]);
				push(*e);
		}
		e++;
	}	
		while(top !=-1)
		{
			printf("%c",pop[]);
		}
}
