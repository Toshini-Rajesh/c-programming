#include <stdio.h>
int main()
{
    int number, originalNumber, remainder, result = 0;
    printf("Enter a three digit integer: ");
    scanf("%d", &number);
    originalNumber = number;
    while (originalNumber != 0)
    {
        remainder = originalNumber%10;
        result += remainder*remainder*remainder;
        originalNumber /= 10;
    }
    if(result == number)
        printf("%d is an Armstrong number.",number);
    else
        printf("%d is not an Armstrong number.",number);
    return 0;
}

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
