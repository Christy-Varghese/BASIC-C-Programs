#include<stdio.h>
void main()
{
	int ar[10],i,j,n,temp,count=0;
	printf("\t  BUBBLESORT \t\n");
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter the Numbers:");
	for(i=0;i<n;i++)
		scanf("%d",&ar[i]);
	for(i=0;i<n;++i)
	{count++;
		for(j=0;j<n-i-1;j++)
		{count++;
			if(ar[j]>ar[j+1])
			{
				temp = ar[j];
				ar[j] = ar[j+1];
				ar[j+1] = temp;
				count+=4;
			}count++;
		}count++;

	}count++;
	printf("The sorted array is - \n");
	for(i=0;i<n;i++)
		printf("%d\n",ar[i]);

	printf("The total time taken by doing bubblesort is - \n");
	printf("%d\n",count);
	

}
