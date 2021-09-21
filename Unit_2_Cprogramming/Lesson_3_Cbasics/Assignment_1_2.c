/*
 * main.c
 *
 *  Created on: Aug 19, 2021
 *      Author: Abdelrhman
 */


#include <stdio.h>
int main()
{



	    int a,b;
	    printf("Enter two numbers: \n");
	    fflush(stdin);	fflush(stdout);
	    scanf("%d  %d",&a,&b);
	    printf("The minimum number is:%d ",(a<b)?a:b );


	return 0;

}
