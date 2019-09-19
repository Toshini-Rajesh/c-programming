#include <stdio.h>
main()
{
    float celsius, fahrenheit;
    int choice=0;
    printf("ENTER 1 FOR C to F:\n");
    printf("ENTER 2 FOR F to C:\n");
    printf("enter your choice\n");
    scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Enter temperature in Fahrenheit: ");
   			scanf("%f", &fahrenheit);
			celsius = (fahrenheit - 32) * 5 / 9;
			printf("%.2f Fahrenheit = %.2f Celsius", fahrenheit, celsius);
			return 0;
			break;
		case 2:
			printf("Enter temperature in celsius: ");
   			scanf("%f", &celsius);
			fahrenheit=(celsius*1.8)+32;
			printf("%.2f Celsius = %.2f Fahrenheit", celsius, fahrenheit);
			return 0;
			break;
		default:
			printf("INVALID ENTRY");
			break;
	}
}
