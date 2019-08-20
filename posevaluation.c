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
		printf("\n STACK OVERFLOW \n");
	}
	else
	{
		top=top+1;
		s[top] = e;
	}
}

char pop()
{
	if(top == -1)
	{
		printf("\n STACK UNDERFLOW!! \n");
	}
	else
	{
		char e = s[top];
		top=top-1;
		return e;
	}
}


 void poseval(char postfix[])
 {

	int i ;
	char ch;
	int val;
	int a, b ;


	
	for (i = 0 ; postfix[i] != ')'; i++)
	{
		ch = postfix[i];
		if (isdigit(ch))
		{
			
			push(ch - '0');
		}
		else if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
		{
			
			a = pop();
			b= pop();

			switch (ch) 
			{

				case '+':
				val = b + a;
				break;

				case '-':
				val = b - a;
				break;

				case '*':
				val = b* a;
				break;

				case '/':
				val = b / a;
				break;

				
			}

			
			push(val);
		}
	}
	printf( " \n Result of expression evaluation : %d \n", pop()) ;
 }


void  main()
 {

	int i ;

	
	char pfix[20];
	
	printf( "\n At the add of the expression add ')' \t  \nEnter postfix expression: ");

	

	for (i = 0 ; i <= 19 ; i++)
	{
		scanf("%c", &pfix[i]);

		if ( pfix[i] == ')' ) 
		{ break; } 
	}

	

	poseval(pfix);
	
	
 }
