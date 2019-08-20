#include<stdio.h>
#include<stdlib.h>

void bubbleSort(int arr[10], int s)
{
	int i,j,temp,count=0;
	for(i=0;i<s;++i)
	{
		count++;
		for(j=0;j<s-i-1;++j)
		{
			count++;
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				count+=4;
			}count++;
		}count++;
	}count++;
	printf("\n After Sorting...");
	printf("\n");
	for(i=0;i<s;++i)
	{
		printf(" %d  ", arr[i]);
	}
	printf("\n Time Complexity : %d", count);
	printf("\n");
	

}


void selectionSort(int arr[10], int s)
{
	int i,j,temp,count=0;
	for(i=0;i<s-1;++i)
	{
		count++;
		for(j=i+1;j<s;++j)
		{
			count++;
			if(arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
				count+=4;
			}count++;
		}count++;
	}count++;
	printf("\n After Sorting...");
	printf("\n");
	for(i=0;i<s;++i)
	{
		printf(" %d  ", arr[i]);
	}
	printf("\n");
	printf("\n Time Complexity : %d", count);
	printf("\n\n");
	
	
}


void matrixAddition(int a[10][10], int b[10][10], int r, int c)
{
	int i,j=0,count=0,res[10][10];
	
	printf("\n After Matrix Addition : ");
	printf("\n");
	for(i=0;i<r;++i)
	{	
		count++;
		res[i][j] = 0;
		for(j=0;j<c;++j)
		{
			count++;
			res[i][j] = a[i][j] + b[i][j];
			count++;
			printf("  %d  ", res[i][j]);		
		}count++;
		printf("\n");
	}count++;
	
	printf("\n");
	printf("\n Time Complexity : %d", count);
	printf("\n\n");
}


void matrixMultiplication(int a[10][10], int b[10][10], int r1, int c1, int r2, int c2)
{
	int i,j=0,k,count=0,res[10][10];
	
	printf("\n After Matrix	Multiplication : ");
	printf("\n");
	for(i=0;i<r1;++i)
	{	
		count++;
		for(j=0;j<c2;++j)
		{	
			count++;
			res[i][j] = 0;
			count++;
			for(k=0;k<r2;++k)
			{
				count++;	
				res[i][j] = res[i][j] + (a[i][k] * b[k][j]);
				count++;
			}count++;	
			printf("  %d  ", res[i][j]);
		}count++;
		printf("\n");
	}count++;
	
	printf("\n");
	printf("\n Time Complexity : %d", count);
	printf("\n\n");
}


void main()
{
	int i,j,ch,arr[10],a[10][10],b[10][10],size,r1,r2,c1,c2;
	while(1)
	{
		

		printf("\n Calculate the time complexity for : ");
		printf("\n 1.BUBBLE SORT \n 2.SELECTION SORT \n 3.MATRIX ADDITION \n 4.MATRIX MULTIPLICATION \n 5.EXIT");
	
		printf("\n Enter your choice : ");
		scanf("%d", &ch);

		switch(ch)
		{
			case 1:
				printf("\n  Enter the size of array : ");
				scanf("%d", &size);
				printf(" Enter the array elements : ");
				for(i=0;i<size;++i)
				{
					scanf("%d", &arr[i]);
				}
				bubbleSort(arr,size);
				break;
		
			case 2:
				printf("\n  Enter the size of array : ");
				scanf("%d", &size);
				printf(" Enter the array elements : ");
				for(i=0;i<size;++i)
				{
					scanf("%d", &arr[i]);
				}
				selectionSort(arr,size);
				break;
		
			case 3:
				printf("\n Enter the row and column : ");
				scanf("%d %d",&r1,&c1);
				printf("\n Enter the first matrix : ");
				for(i=0;i<r1;i++)
				{
					for(j=0;j<c1;j++)
					{
						scanf("%d", &a[i][j]);
					}
				}
				printf("\n Enter the second matrix : ");
				for(i=0;i<r1;++i)
				{
					for(j=0;j<c1;++j)
					{
						scanf("%d", &b[i][j]);
					}
				}
				
				matrixAddition(a,b,r1,c1);
				break;
				
			case 4:
				printf("\n Enter the row and column for first matrix : ");
				scanf("%d %d",&r1,&c1);
				printf("\n Enter the first matrix : ");
				for(i=0;i<r1;i++)
				{
					for(j=0;j<c1;j++)
					{
						scanf("%d", &a[i][j]);
					}
				}
				printf("\n Enter the row and column for second matrix : ");
				scanf("%d %d",&r2,&c2);
				if(r2!=c1)
				{
					printf("\t\n MULTIPLICATION NOT POSSIBLE !!!");
				}
				else
				{
					printf("\n Enter the second matrix : ");
					for(i=0;i<r2;++i)
					{
						for(j=0;j<c2;++j)
						{
							scanf("%d", &b[i][j]);
						}
					}
				
					matrixMultiplication(a,b,r1,c1,r2,c2);
				}
				break;
				
			case 5:
				exit(0);
				break;
			default:
				printf("INVALID CHOICE :(!!!");
		}
	}
}
