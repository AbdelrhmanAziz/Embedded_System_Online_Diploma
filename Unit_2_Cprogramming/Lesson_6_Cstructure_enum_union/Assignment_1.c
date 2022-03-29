#include <stdio.h>

struct Sstudent
{
	char name[50];
	int roll_number;
	float marks;
}s;


int main()
{

	printf("Enter information of student:\n");                   fflush(stdout);
        scanf("%s %d %f", s.name ,&s.roll_number ,&s.marks);         fflush(stdout);

	printf("\nDisplaying information:\n");
	printf("name: %s\nroll_number: %d\nmarks: %.2f", s.name ,s.roll_number , s.marks);


	return 0;
}




