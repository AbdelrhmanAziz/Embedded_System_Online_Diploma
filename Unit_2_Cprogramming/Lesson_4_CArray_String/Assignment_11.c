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

	int i ;
	char arr[30] ;
	char text[30];

	printf("Enter a string: ");
	fflush(stdin);fflush(stdout);
	gets(arr);

	for(i=0 ; i<strlen(arr) ; i++)
	{
		text[i]=arr[strlen(arr)-1-i];
	}

	text[strlen(arr)]=0;
	printf("Reverse string is: %s",text);






	return 0;
}

