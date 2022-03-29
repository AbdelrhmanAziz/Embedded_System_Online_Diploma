#include <stdio.h>
struct Scomplex Add(struct Scomplex n1,struct Scomplex n2);

struct Scomplex
{
	float real;
	float imag;
}x,y,z;

int main()
{       printf("For 1st complex number:-\n");
	printf("Enter the real and imaginary parts: ");   fflush(stdout);
	scanf("%f%f",&x.real,&x.imag);                    fflush(stdout);
	printf("For 2nd complex number:-\n");
	printf("Enter the real and imaginary parts: ");   fflush(stdout);
	scanf("%f%f",&y.real,&y.imag);                    fflush(stdout);

	z=Add(x,y);
        printf("Sum = %.2f + %.2fi",z.real,z.imag);

	return 0;
}

struct Scomplex Add(struct Scomplex n1,struct Scomplex n2)
{
	struct Scomplex result;
	result.real = n1.real + n2.real;
	result.imag = n1.imag + n2.imag;
	return result;
}






