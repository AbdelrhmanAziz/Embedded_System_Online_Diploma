#include <stdio.h>
#include <string.h>

void dec(void);
void dec()
{
	int x,y;
	for(x=0  ; x<=9 ; x++)
	{
		for( y=x ;y<=9 ; y++)
		{
			printf("%d ",y);
		}
		printf("\n");
	}
}

int main()
{

	dec();
	return 0;
}

