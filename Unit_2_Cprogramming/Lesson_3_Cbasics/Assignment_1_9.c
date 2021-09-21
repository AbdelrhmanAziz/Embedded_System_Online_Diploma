/*
 * main.c
 *
 *  Created on: Aug 19, 2021
 *      Author: Abdelrhman
 */


#include <stdio.h>
int main()
{





//	    Homework_2_Ex5

	    char i;
		printf("Enter a character: ");
		fflush(stdin); fflush(stdout);
		scanf("%c",&i);

	    if( (i>=65 && i<=90) || (i>=97 && i<=122) )
	    {
	      printf("%c is an alphabet", i);
	    }
	    else
	    {
	      printf("%c is not an alphabet", i);
	    }





	return 0;

}
