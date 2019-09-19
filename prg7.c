#include<stdio.h>
main()
{
	printf("ENTER A NUMBER:");
	int n=0;
	int mul=0;
	int i=0;
	scanf("%d",&n);
	printf("\n%d MULTIPLICATION TABLE UPTO 20\n");
	for(i=1;i<=20;i++)
	{
		mul= n*i;
		printf("\n%d * %d = %d",n , i ,mul);
	}
	return 0;
}
