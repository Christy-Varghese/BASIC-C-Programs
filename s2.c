#include<stdio.h>
void main()
{
	int arr[10] , i , j, swap, n , count=0;
	printf("\t  SELECTION SORT   \t\n");
	printf("Enter the Number of Digits :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	
	for(i=0;i<n-1;i++)
	{count++;
		for(j=i+1;j<n;j++)
		{count++;
			if(arr[j]<arr[i])
			{
				swap = arr[j];
				arr[j] = arr[i];
				arr[i] = swap;
				count+=4;
			}count++;
		}count++;
	}count++;
	printf("The sorted array is - \n");
	for(i=0;i<n;i++)
		printf("%d\n",arr[i]);
	printf("\n The time taken by doing selection sort is -\n");
	printf("%d\n",count);
}
