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

	int no, i, e, j ;
	printf("Enter no of the elements: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&no);

	int arr[10];
	for(i=0 ; i<no ; i++)
	{
		printf("[%d]: ",i);
		fflush(stdin);fflush(stdout);
		scanf("%d",&arr[i]);
	}

	printf("Enter The element to be inserted: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&e);

	printf("In The Location: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&j);

	for(i=no ; i>=j-1 ; i--)
	{
		arr[i+1]=arr[i];
	}
	arr[j]=e;

	for(i=0 ; i<no+1 ; i++)
	{
		printf("%d ",arr[i]);
	}


	return 0;
}

