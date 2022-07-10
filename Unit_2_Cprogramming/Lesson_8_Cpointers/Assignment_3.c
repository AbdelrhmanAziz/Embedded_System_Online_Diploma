#include <stdio.h>
#include <string.h>

int main ()
{

	char arr1[20] , arr2[20];
	printf("Input a string: ");                fflush(stdout);
	gets(arr1);                                fflush(stdout);
	arr2[strlen(arr1)] = '\0' ;


	char* ptr = arr1;

	int i;
	for(i=strlen(arr1)-1 ; i>=0 ; i--,ptr++)
	{
		arr2[i]=*ptr;
	}


	printf("Reverse of the string is: %s",arr2);





	return 0;
}









