#include <stdio.h>

struct Sdistance
{
	int feet ;
	float inch ;

}x,y,result;

int main()
{
	printf("Enter 1st distance:-\n");
	printf("Enter feet: ");            fflush(stdout);
	scanf("%d",&x.feet);               fflush(stdout);
	printf("Enter inch: ");            fflush(stdout);
	scanf("%f",&x.inch);               fflush(stdout);

	printf("\nEnter 2nd distance:-\n");
	printf("Enter feet: ");            fflush(stdout);
	scanf("%d",&y.feet);               fflush(stdout);
	printf("Enter inch: ");            fflush(stdout);
	scanf("%f",&y.inch);               fflush(stdout);

	result.feet = x.feet + y.feet ;
	result.inch = x.inch + y.inch ;

	while(result.inch >= 12)
	{
		result.inch=result.inch-12;
		result.feet++;
	}

	printf("\nsum of distance= %d'-%.2f",result.feet,result.inch);

	return 0;
}









