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

	int no, i,e;
	printf("Enter no of the elements: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&no);

	int arr[no];
	for(i=0 ; i<no ; i++)
	{
		printf("[%d]: ",i);
		fflush(stdin);fflush(stdout);
		scanf("%d",&arr[i]);
	}

	printf("Enter The element to be searched: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&e);

	for(i=0 ; i<no ; i++)
	{
		if(e==arr[i])
		{
			printf("Number found at the location: %d\n",i);
			break;
		}
	}

	if(e!=arr[i])
	{
		printf("Number not found");
	}



















	return 0;
}

