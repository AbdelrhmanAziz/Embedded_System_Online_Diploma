#include <stdio.h>

int factorial(int n);

int main()
{
	int n;
	printf("Enter an positive integer number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	fflush(stdin);fflush(stdout);
	printf("factorial is: %d",factorial(n));


	return 0;
}

int factorial(int n)
{
	if(n!=1)
	return n*factorial(n-1);
}
