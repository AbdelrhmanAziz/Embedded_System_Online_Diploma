/*
 * main.c
 *
 *  Created on: Aug 19, 2021
 *      Author: Abdelrhman
 */


#include <stdio.h>
int main()
{



	float x[5]={3.2,5,4.5,6,7.9};
	float y;

	printf("x[5]\ty\n\r");

	for(int i=0;i<5;i++)
	{
		y=5*x[i]*x[i]+3*x[i]+2;

		printf("%.2f\t%.2f\n",x[i],y);
	}





	return 0;

}
