/*
 * main.c
 *
 *  Created on: Aug 19, 2021
 *      Author: Abdelrhman
 */


#include <stdio.h>
int main()
{


    float circumference  , area ;
	float radius;
	char choise;

	printf("Enter circle radius: ");
	fflush( stdin); fflush( stdout);
	scanf("%f", &radius   );
	printf("Enter your choise (a for area, c for circumference): ");
	fflush( stdin);	fflush( stdout);
	scanf( "%c", &choise);
	if( choise=='a')
	{
		area = 3.14*radius*radius ;
		printf("%f", area) ;
	}
	else if ( choise== 'c')
	{
		circumference = 2*3.14*radius ;
		printf( "%f", circumference);
	}
	else
	{
		printf( "error ");
	}




	return 0;

}
