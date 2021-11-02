/*
 * main.c
 *
 *  Created on: Aug 19, 2021
 *      Author: Abdelrhman
 */


#include <stdio.h>
int main()
{



	int arr[3][3];
	int a[3][3];

	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&arr[j][i]);
		}
	}

	printf("\n");

	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			a[j][i]=arr[i][j];
		}
	}


	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}

















	return 0;

}
