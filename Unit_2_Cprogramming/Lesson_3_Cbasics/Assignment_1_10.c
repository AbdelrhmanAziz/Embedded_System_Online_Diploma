/*
 * main.c
 *
 *  Created on: Aug 19, 2021
 *      Author: Abdelrhman
 */


#include <stdio.h>
int main()
{


	//    Homework_2_Ex7
	    int fac=1;
	    int i;
	    printf("Enter an integer: ");
	    fflush(stdin); fflush(stdout);
	    scanf("%d",&i);

	    if(i>=0)
	    {
	       for( int j=i;  j>=1; j--)
	       {
		     fac=fac*j;
	       }
	       printf("fac is: %d",fac);
	    }
	    else
	    {
		  printf("doesn't exist");
	    }





	return 0;

}
