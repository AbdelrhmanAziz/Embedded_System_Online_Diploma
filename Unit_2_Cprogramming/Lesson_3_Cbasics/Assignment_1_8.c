/*
 * main.c
 *
 *  Created on: Aug 19, 2021
 *      Author: Abdelrhman
 */


#include <stdio.h>
int main()
{



  //    Homework_2_Ex3
	    float a,b,c,max=0.0 ;
	    printf("Enter three numbers:\n");
	    fflush(stdin);	fflush(stdout);
		scanf("%f\n%f\n%f\n",&a,&b,&c);

	     if(a>b)
	     {
	   	   if(a>c)
	   	   { max=a;}
	   	   else
	   	   { max=c;}
	     }
	     else
	     {
	   	   if(b>c)
	   	   {max=b;}
	   	   else
	   	   {max=c;}
	     }

	     printf("The maximum number: %.2f\n", max);


	return 0;

}
