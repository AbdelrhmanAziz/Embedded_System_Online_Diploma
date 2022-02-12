#include <stdio.h>

void prime(int x,int y);
void prime(x,y)
{
	int i;

/*  if the user enter x smaller than y:   */
	if(x<y)
	{	x++; }
	labelname_1:
	for(; x<y ; x++)
	{

		for(i=2 ; i<x ; i++)
		{
			if(x%i == 0)
			{   x++;   i++;
			goto labelname_1;
			}
		}
		if(x!=1)
		{	printf("%d ",x); }
	}
/*  if the user enter y smaller than x:    */
	if(y<x)
	{	y++; }
	labelname_2:
	for(; y<x ; y++)
	{

		for(i=2 ; i<y ; i++)
		{
			if(y%i == 0)
			{   y++;   i++;
			goto labelname_2;
			}
		}
		if(y!=1)
		{	printf("%d ",y);  }
	}
}

int main()
{
	int x,y;
	printf("Enter two intervals: ");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&x,&y);
	fflush(stdin);fflush(stdout);
	printf("Prime numbers between %d and %d are:",x,y);
	prime(x,y);

	return 0;
}
