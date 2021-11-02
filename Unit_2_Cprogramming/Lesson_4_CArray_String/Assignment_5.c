/*
 * main.c
 *
 *  Created on: Aug 19, 2021
 *      Author: Abdelrhman
 */


#include <stdio.h>
#include <string.h>
int main()
{

int no,i;
float avg,sum=0.0;

printf("Enter The Number Of Data: ");
fflush(stdin);fflush(stdout);
scanf("%d",&no);

float number[no];

for(i=0 ; i<no ; i++)
{
	printf("%d. Enter Number: ",i+1);
	fflush(stdin);fflush(stdout);
	scanf("%f",&number[i]);

	sum=sum+number[i];
}

avg=sum/no ;
printf("Average = %f",avg);












	return 0;
}
