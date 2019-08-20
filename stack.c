#include<stdio.h>
#include<stdlib.h>
int top=-1,a[10],size;
void push()
{
	int e;
	if(top==size-1)
	{
		printf("   STACK OVERFLOW ");
	}
	else
	{
		printf("Enter the element : ");
		scanf("%d",&e);
		top=top+1;
		a[top] = e;
	}
}

int pop()
{
	if(top == -1)
	{
		printf(" STACK UNDERFLOW!!");
	}
	else
	{
		int e = a[top];
		top=top-1;
		return e;
	}
}


void print()
{
	if(top!=-1)
		for(int i=top;i>=0;i--)
			printf("| %d |\n___\n",a[i]);
	else
		printf("\n CANNOT PRINT EMPTY STACK !!");
}


void main()
{
	int a,c;
	printf("\n size of the array : ");
	scanf("%d",&size);

	while(1)
	{
		
	printf("\n Enter the option:\n 1/Insert \n 2.Delete \n 3.Display \n 4.exit \n");
	printf("\n Enter your option :");	
	scanf("%d",&a);
		switch(a)	
			{
				case 1:

					push();
					break;
				case 2:
					c=pop();
					printf("\n %d delete successful",c);
					break;
				case 3: 
					print();
					break;
				case 4 :
					exit(0);
			}
	}
}
					
