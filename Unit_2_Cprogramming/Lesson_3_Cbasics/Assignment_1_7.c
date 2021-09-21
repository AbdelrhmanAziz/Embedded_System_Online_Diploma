/*
 * main.c
 *
 *  Created on: Aug 19, 2021
 *      Author: Abdelrhman
 */


#include <stdio.h>
int main()
{



    //  Homework_1_Ex7

	    int a=20;
	    int b=37;

	    printf("Before swap a is: %d \n", a);
	    printf("Before swap b is: %d \n\r", b);

	    a=a+b;
	    b=a-b;
	    a=a-b;

	    printf("After swap a is: %d \n", a);
	    printf("After swap b is: %d", b);



	return 0;

}
