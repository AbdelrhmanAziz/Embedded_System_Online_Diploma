/*
 * main.c
 *
 *  Created on: Aug 19, 2021
 *      Author: Abdelrhman
 */


#include <stdio.h>
int main()
{

	float arr[10];

	for(int i=1; i<=10; i++)
	{
		printf("Enter student %d degree: ", i);
		fflush(stdin);fflush(stdout);
		scanf("%f",&arr[i-1]);
	}

	for(int i=1; i<=10; i++)
	{
		printf("student %d degree is: %.2f\n", i,arr[i-1]);

	}

	return 0;

}
