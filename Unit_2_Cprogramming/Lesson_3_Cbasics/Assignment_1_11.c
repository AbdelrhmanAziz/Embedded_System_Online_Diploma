/*
 * main.c
 *
 *  Created on: Aug 19, 2021
 *      Author: Abdelrhman
 */


#include <stdio.h>
int main()
{


	//	Homework_2_Ex8
		char u;
		float x,y,z;

		printf("Enter operator either + or - or * or /: ");
		fflush(stdin); fflush(stdout);
		scanf("%c",&u);
		printf("Enter two operands: \n");
		fflush(stdin); fflush(stdout);
		scanf("%f\n%f",&x,&y);

		if(u=='+')
		{
			z=x+y;
			printf("%.2f%c%.2f=%.2f",x,u,y,z);
		}

		else if(u=='/')
		{
			z=x/y;
			printf("%.2f%c%.2f=%.2f",x,u,y,z);
		}

		else if(u=='-')
		{
			z=x-y;
			printf("%.2f%c%.2f=%.2f",x,u,y,z);
		}

		else if(u=='*')
		{
			z=x*y;
			printf("%.2f%c%.2f=%.2f",x,u,y,z);
		}
		else
		{
			printf("error");
		}




	return 0;

}
