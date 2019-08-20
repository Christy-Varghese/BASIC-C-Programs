#include<stdio.h>

int main(){

	int bt[10]={0},tat[10]={0},wt[10]={0},ct[10]={0};
	int n,sum=0;
	float totalTAT=0,totalWT=0;

	printf("Enter number of processes	");
	scanf("%d",&n);

	printf("Enter burst time for each process\n\n");

	for(int i=0;i<n;i++)
	{
		printf("Burst time of process[%d]	",i+1);
		scanf("%d",&bt[i]);
		
		printf("\n");
	}
		

	for(int j=0;j<n;j++)
	{
		sum =sum + bt[j];
		ct[j]+=sum;
	}


	for(int k=0;k<n;k++)
	{
		tat[k]=ct[k];
		totalTAT+=tat[k];
	}

	
	for(int k=0;k<n;k++)
	{
		wt[k]=tat[k]-bt[k];
		totalWT+=wt[k];
	}


	printf("\n\nProcess\t  BT\t TT\t WT\t TAT\t\n\n");
	
	for(int i=0;i<n;i++)
	{
		printf("P%d\t %d\t %d\t %d\t %d\t %d\n",i+1,bt[i],ct[i],wt[i],tat[i]);
	}

	printf("\n\t\t****GANTT CHART****\n");		
	printf("\t\t-------------------\n\n");
	
	for(int s=0;s<n;s++)
	{
		printf("|\t%d\t|",wt[s]);
		printf("|\tP[%d]\t|",s+1);
		printf("|\t%d\t|\n",tat[s]);
	}
		
	printf("\n\nAverage Turnaround Time = %f\n",totalTAT/n);
	printf("Average Waiting Time = %f\n\n",totalWT/n);

	
	
	
	return 0;
}
