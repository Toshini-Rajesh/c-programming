#include<stdio.h>
main()
{
	int marks[3];
	int i=0;
	float avg=0.0;
	int sum=0;
	printf("ENTER THE MARKS IN 3 SUBJECTS:");
	for(i=0;i<3;i++)
	{
		scanf("%d",&marks[i]);
	}
	for(i=0;i<3;i++)
	{
		sum=sum+marks[i];
	}
	printf("\nTHE SUMS IS:%d",sum);
	avg=sum/3;
	printf("\nTHE AVERAGE IS:%f",avg);
}
