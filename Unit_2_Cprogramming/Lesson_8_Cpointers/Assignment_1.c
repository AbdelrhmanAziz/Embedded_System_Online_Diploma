#include <stdio.h>


int main ()
{

	int m = 100;
	printf("Address of m: %p\nValue of m: %d\n\n",&m,m);

	/* now ab is assigned with the address of m */
	int* ab = &m;
	printf("Address of pointer ab: %p\nContent of pointer ab: %d\n\n",&ab,*ab);

	/* The value of m is assigned to 35 now */
	m = 35;
	printf("Address of pointer ab: %p\nContent of pointer ab: %d\n\n",&ab,*ab);


	/* The pointer variable ab is assigned with the value 7 now */
	*ab = 7;
	printf("Address of m: %p\nValue of m: %d\n\n",&m,m);



	return 0;
}









