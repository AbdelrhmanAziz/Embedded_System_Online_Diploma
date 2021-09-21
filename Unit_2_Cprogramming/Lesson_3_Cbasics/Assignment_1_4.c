/*
 * main.c
 *
 *  Created on: Aug 19, 2021
 *      Author: Abdelrhman
 */


#include <stdio.h>
int main()
{


		int nstudents;
		float x, avg, sum=0;
		printf("Enter the number of students :");
		fflush(stdin); fflush(stdout);
		scanf("%d", &nstudents);
	    for(int i=1 ; i<=nstudents ;i++)
	    {
	    	printf("Enter student (%d) degree :", i);
	    	fflush(stdin); fflush(stdout);
	    	scanf("%f", &x);
	    	sum+=x;
	    }
	    avg=sum/nstudents;
	    printf("The average is: %f", avg);





	return 0;

}
