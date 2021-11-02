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
	int mat_1[2][2];
	int mat_2[2][2];
	int mat_sum[2][2];
    int i,j;

    printf("Matrix one:\n");
	for(i=0 ; i<2 ; i++)
	{
		for (j=0 ; j<2 ; j++)
		{
			printf("[%d][%d]element: ",j,i);
			fflush(stdin);fflush(stdout);
			scanf("%d",&mat_1[j][i]);
		}
	}

	printf("\nMatrix two:\n");
	for(i=0 ; i<2 ; i++)
	{
		for (j=0 ; j<2 ; j++)
		{
			printf("[%d][%d]element: ",j,i);
			fflush(stdin);fflush(stdout);
			scanf("%d",&mat_2[j][i]);
		}
	}

	printf("\nThe sum:\n");
	for(i=0 ; i<2 ; i++)
	{
		for (j=0 ; j<2 ; j++)
		{
			mat_sum[j][i]=mat_1[j][i]+mat_2[j][i];
			printf("[%d][%d]element: %d\n",j,i,mat_sum[j][i]);
		}
	}













}
