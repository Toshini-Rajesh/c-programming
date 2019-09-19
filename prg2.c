#include<stdio.h>
main()
{
	float temp=0;
	printf("ENTER THE TEMPATURE OF COIMBATORE IN CELSIUS :");
	scanf("%f",&temp);
	printf("COIMBATORE'S TEMPERATURE IN CELSIUS :%f\n",temp);
	float tempf=((1.8*temp)+32);
	printf("\nTEMPERATURE IN FAHRENHEIT:%f",tempf);	
}
