#include <stdio.h>
#include <string.h>

float power(float n , int k);

float power(float n , int k)
{
	if(k != 0)
	{
		return n*power(n,k-1);
	}
	else
	{
		return 1;
	}
}

int main()
{
	float n; int k;
	printf("Enter base number: ");                     fflush(stdin);fflush(stdout);
	scanf("%f",&n);
	printf("Enter power number(positive integer): ");  fflush(stdin);fflush(stdout);
	scanf("%d",&k);                                    fflush(stdin);fflush(stdout);

	printf("(%.3f)^%d=%.3f",n,k,power(n,k) );



	return 0;
}

