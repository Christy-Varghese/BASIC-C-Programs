#include<stdio.h>
void main()
{
	int num, i ,j,ch, flag = 0, a[10],pos=0, temp,n;
	printf("\n  Enter the Limit : ");
	scanf("%d",&n);
	printf("\n Enter the Number : ");
	for( i=0;i<n;i++)
		scanf("%d",&a[i]);
	do
	{
		printf("******************************\n");		
		printf(" \n 1.Linear Search \n 2. Binary Search \n 3. Exit \n ");
		printf("\n Enter your option :\t");
		scanf("%d",&ch);
		printf("******************************\n");
		printf("\n Enter the numbers to be searched : \t");
		scanf("%d",&num);
		printf("******************************\n");
		if(ch==1)
		{
			for(i=0;i<n;i++)
			{	if(a[i] == num)
				{ 	printf("%d found at %dth position\n", num , i+1); }
				pos=1;
			}
			if (pos ==0)
				printf("\n Number not Found \n");
		}
		else if(ch==2)
		{
			for(i=0;i<n;i++)
			{	for(j=i+1;j<n;j++)
				{
					if(a[i]>a[j])
					{	temp = a[i];
						a[i] = a[j];
						a[j] = temp;
					}
				}		
			}
			int mid,first=0,last= n-1;
			mid = (first+last)/2;
			while(first <= last)
			{	if(a[mid]< num)
					first = mid+1;
				else if(a[mid] == num)
				{	pos = mid;
					printf("\n Element at %dth position \n", mid+1);
					break;
				}
				else
				{	last = mid-1;
					mid = (first+last)/2;
				}
			if(first>last)
			printf("\n Element not found \n ");
			}
		}
		else if(ch==3)
			printf("\n **********Exiting***********\n");
		
		else 
			printf("\n  !!!!!Invalid!!!!!! ");
	}while(ch!= 3);
}
	
			
				
			
