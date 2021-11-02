/*
 * main.c
 *
 *  Created on: Aug 19, 2021
 *      Author: Abdelrhman
 */


#include <stdio.h>
#include <string.h>
int main()
{

	int i , j=0;
	char arr[30] , x;

	printf("Enter a string: ");
	fflush(stdin);fflush(stdout);
	gets(arr);

	printf("Enter a character to find frequency: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&x);

	for(i=0 ; i<strlen(arr) ; i++)
	{
		if(x==arr[i])
		{
			j++;
		}
	}

	printf("frequency of %c = %d", x,j);






	return 0;
}

