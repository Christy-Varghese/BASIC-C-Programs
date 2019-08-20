#include<stdio.h>
#include<stdlib.h>
struct node
{ int data;
  struct node* addr;
}*head = NULL;

void insertbeg( int val)
{	struct node*n,*ptr;
	n=(struct node*) malloc(sizeof(struct node));
	n->data = val;
	ptr = head;
	if(head == NULL)
		head = n;
 	else
	{
		n->addr = ptr;
		head = n;
	}
}

void insertmid(int val , int pos)
{
	struct node*n,*ptr;
	int i;
	n=(struct node*)malloc(sizeof(struct node));
	n->data = val;
	ptr=head;
	if(head == NULL)
		head = n;
	else
		{
			for(i=1;i<pos-1;i++)
			{
				ptr = ptr-> addr;
				if(ptr==NULL)
					printf("\nNO POSITION FOUND\n");
			}
			n->addr = ptr->addr;
  			ptr->addr=n;
		}
}
void insertend(int val)
{
	struct node*n,*ptr;
	n=(struct node*)malloc(sizeof(struct node));
	n->data = val;
	ptr = head;
	if(head == NULL)
		head = n;
	else
	{
		while(ptr->addr!=NULL)
			ptr = ptr->addr;
		ptr->addr = n;
		n->addr = NULL;
	}
}

void deletebeg()
{
	struct node*ptr;
	ptr = head;
	if(head==NULL)
		printf("\nList is Empty\n");
	else
	{
		head = ptr->addr;
	}
}


void deleteend ()
{
	struct node *ptr , *temp;
	ptr = head;
	if(head-> addr== NULL)
		printf("\nLIST IS EMPTY\n");
	else
	{	while(ptr->addr !=NULL)
		{	temp = ptr;
			ptr = ptr->addr;
		}
		temp -> addr = NULL;
	}
}
 
void deletemid(int pos)
{
	struct node *ptr , *temp;
	ptr = head;
	if(head == NULL)
		printf("\nThe List is empty\n");
	else
	{
		for(int i=0;i<pos;++i)
		{
			temp = ptr;
			ptr = ptr->addr;
			if(ptr==NULL)
				printf("\nNO position Found\n");
		}
		temp->addr = ptr->addr;
	}
}
		
	
void traversal()
{
	if(head == NULL)
		printf("\nThe Linked LIst is EMPTY\n");
	else
	{
		printf("\nThe Linked LIst is:");
		struct node *p ;
		p = head;
		while(p!=NULL){
				printf("%d -->  ",p->data);
				p=p->addr;
			      }
			printf("\n");
	}
}

void main()
{
	int ch,val,pos;
	while(1)
		{ 
			 printf("1,Display \n 2.Insertion in the beginning \n 3. Deletion in the Beginning \n4. Insertion in the middle. \n 5. Insertion  at the end \n 6. Deletion at the middle . \n 7 . Deletion at the end \n 8.EXIT");
			 printf("Enter your choice : ");\
			 scanf("%d",&ch);
			 switch (ch)
				{
					case 1: traversal();
						break;
					case 2: printf("\n Enter value:");
						scanf("%d",&val);
						insertbeg(val);
						break;
					case 3: deletebeg();
						break;
					case 4: printf("\n Enter value:");
						scanf("%d",&val);
						printf("\n Enter position : ");
						scanf("%d",&pos);
						insertmid(val,pos);
						break;
					case 5: printf("\n Enter value:");
						scanf("%d",&val);
						insertend(val);
						break;
					case 6: printf("\nEnter the position :");
						scanf("%d", &pos);
						deletemid(pos);
						break;
					case 7: deleteend();
						break;
					case 8: exit(0);
						break;
				}
		}
}					
		

