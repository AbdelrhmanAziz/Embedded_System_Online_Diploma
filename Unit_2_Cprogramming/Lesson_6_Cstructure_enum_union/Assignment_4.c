#include <stdio.h>

struct student
{
	char name[50];
	float mark;
};

int main()  {

	struct student x[5];
	printf("Enter information of student:-\n");
	int i;
	for(i=1 ; i<=5 ; i++)
	{
		printf("For roll number %d:\n",i);
		printf("Enter name: ");                 fflush(stdout);
		scanf("%s",x[i-1].name);                fflush(stdout);
		printf("Enter mark:");                  fflush(stdout);
		scanf("%f",&x[i-1].mark);               fflush(stdout);
	}

	printf("\nDisplaying information of student:-\n");
	for(i=1 ; i<=5 ; i++)
	{
		printf("For roll number %d:\n",i);
		printf("Name: %s\nMark: %.2f\n",x[i-1].name,x[i-1].mark);
	}
	return 0;
}




