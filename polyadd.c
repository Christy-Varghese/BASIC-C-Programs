#include<stdlib.h>
#include<stdio.h>

struct node
{
	int coe,exp;
	struct node *ad;
}*header=NULL,*h1=NULL,*h2=NULL;

struct node *createnode(int c,int e)
{
	struct node *nd;
	nd= (struct node *) malloc(sizeof(struct node));
	nd->coe=c;
	nd->exp=e;
	nd->ad=NULL;
	return nd;
}
 
void traversal(struct node *h)
{
	struct node *ptr;
	ptr=h;
	printf("\n");
	while(ptr!=NULL)
	{
		printf("%d x %d + ",ptr->coe,ptr->exp);
		ptr=ptr->ad;
	}
	printf("\n");
}


void createpolynomial(int s)
{
	int i,c,e;
	struct node *nd,*ptr;

	for(i=0;i<s;i++)
	{
	printf("enter coefficient\n");
	scanf("%d",&c);
	printf("enter exponent\n");
	scanf("%d",&e);
	nd=createnode(c,e);
	if(h1==NULL)
	{
		h1=nd;
		ptr=nd;
	}
	else
	{
		ptr->ad=nd;
		ptr=nd;
	}
	}
	traversal(h1);
}

void createpoly(int s)
{
	struct node *nd,*ptr;
	int i,c,e;
	for(i=0;i<s;i++)
	{
	printf("enter coefficient\n");
	scanf("%d",&c);
	printf("enter exponent\n");
	scanf("%d",&e);
	nd=createnode(c,e);
	if(h2==NULL)
	{
		h2=nd;
		ptr=nd;
	}
	else
	{
	ptr->ad=nd;
	ptr=nd;
	}
	}
	traversal(h2);
}


void polyadd(struct node *p1,struct node *p2)

{
	struct node *ptr,*sm;
	sm=(struct node *) malloc (sizeof(struct node));
	while(p1!=NULL && p2!=NULL)
	{
		if(p1->exp>p2->exp)
		{		
			sm=createnode(p1->coe,p1->exp);
			p1=p1->ad;
		}

		else if(p1->exp<p2->exp)
		{
			sm=createnode(p2->coe,p2->exp);
			p2=p2->ad;
		}
		else 
		{
			sm=createnode(p1->coe+p2->coe,p1->exp);	
			p1=p1->ad;
			p2=p2->ad;

		}
	if(header==NULL)
	{
		header=sm;
		ptr=sm;
	}
	else 
	{
		ptr->ad=sm;
		ptr=sm;
	}

}
 
while(p1!=NULL)
{
	sm=createnode(p1->coe,p1->exp);
	p1=p1->ad;
	ptr->ad=sm;
	ptr=sm;
}
	


while(p2!=NULL)
{
	sm=createnode(p2->coe,p2->exp);
	p2=p2->ad;
	ptr->ad=sm;
	ptr=sm;
}
traversal(header);
}	
	

void main()
{
	int s1,s2;
	printf("enter size of first polynomial\n");
	scanf("%d",&s1);
	createpolynomial(s1);
	printf("enter size of second polynomial\n");
	scanf("%d",&s2);
	createpoly(s2);
	printf("polynomial addition....\n");
	printf("\n");
	polyadd(h1,h2);
}
