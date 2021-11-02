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

	int Rows,Columns,i,j;
	printf("Enter The Rows of Array: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&Rows);
	printf("Enter The Columns of Array: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&Columns);
	int arr_1[Rows][Columns];
	int arr_2[Columns][Rows];

	for(i=0 ; i<Columns ; i++)
	{
		for(j=0 ; j<Rows ; j++)
		{
			printf("arr_1[%d][%d]: ",j,i);
			fflush(stdin);fflush(stdout);
			scanf("%d",&arr_1[j][i]);
		}
	}
	printf("The Matrix:\n");
	for(i=0 ; i<Rows ; i++)
	{
		for(j=0 ; j<Columns ; j++)
		{  printf("%d\t",arr_1[i][j]);  }
		printf("\n");
	}
	for(i=0 ; i<Rows ; i++)
	{
		for(j=0 ; j<Columns ; j++)
		{  arr_2[j][i]=arr_1[i][j];     }
	}
	printf("The Transposed Matrix:\n");
	for(i=0 ; i<Columns; i++)
	{
		for(j=0 ; j<Rows ; j++)
		{   printf("%d\t",arr_2[i][j]); }
		printf("\n");
	}




	return 0;
}
