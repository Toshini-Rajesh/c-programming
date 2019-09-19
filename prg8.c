#include<stdio.h>
main()
{
	int n=0;
	int i=0;
	int fact=1;
	printf("ENTER A NUMBER:");
	scanf("%d",&n);
	printf("\n%d FACTORIAL");
	for(i=n;i>=n;i--)
	{
		fact=fact*i;
		printf("\n:%d",fact);
	}
	return 0;
}
