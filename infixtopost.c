#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int top=-1;
char s[20];
void push(char e)
{

	if(top==19)
	{
		printf("   STACK OVERFLOW ");
	}
	else
	{
		top=top+1;
		s[top] = e;
	}
}

char pop()
{
	char e = s[top];
	top = top-1;
	return e;
}

int icp(char x)
{
	
	if(x=='+'||x=='-')
		return 1;
	else if(x=='*'||x=='/'||x=='%')
		return 3;
	else if(x=='^')
		return 6;
	else if(x=='(')
		return 9;
	else if(x==')')
		return 0;
}

int isp(char x)
{
	
	if(x=='+'||x=='-')
		return 2;
	else if(x=='*'||x=='/'||x=='%')
		return 4;
	else if(x=='^')
		return 5;
	else if(x=='(')
		return 0;
}

	


void main()
{
	char st[20],c,itm;
	int i=0;
	printf("\n Enter the expersion::");
	scanf("%s",st);
	push(st[0]);
	
	while(top>-1)
	{
		itm=st[i];
		c=pop();
		if(isalnum(itm)==1)
		{	
			push(c);
			printf("%c",itm);
		}
		else if(itm==')')
		while(c!='(')
		{
			printf("%c",c);
			c=pop();
		}
		else if (isp(c)>=icp(itm))
		{
			while(isp(c)>=icp(itm))
			{
				printf("%c" ,c);
				c = pop();
			}
			push(c);
			push(itm);
		}
		else if (isp(c)<icp(itm))
		{
			push(c);
			push(itm);
		}
		else 
			printf("\n INVALID EXPRESSION.....\n");
		i++;		
	}
}
			


	
				
