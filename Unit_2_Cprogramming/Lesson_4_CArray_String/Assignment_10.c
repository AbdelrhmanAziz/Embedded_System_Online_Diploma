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
	char arr[30] ;

	printf("Enter a string: ");
	fflush(stdin);fflush(stdout);
	gets(arr);

	for(i=0 ; i<30 ; i++)
	{
		if(arr[i]==0)
		{
			break;
		}
		j++;
	}

	printf("Length of string = %d",j);






	return 0;
}

