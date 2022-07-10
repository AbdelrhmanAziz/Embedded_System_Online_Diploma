#include <stdio.h>
int main ()  {

	int x,i;

	printf("Input the size of the array(max 15): ");
	fflush(stdout);
	scanf("%d",&x);

	int arr[x];
	int* p = arr;

	printf("Filling the array:-\n");
	for(i=0 ; i<x ; i++,p++)
	{
		printf("arr[%d]: ",i);
		fflush(stdout);
		scanf("%d",p);
	}

	p=&arr[x-1];

	printf("The elements of array in reverse order:-\n");
	for(i=0 ;i<x ;i++,p--)
	{
		printf("%d\n",*p);
	}

	return 0;
}









