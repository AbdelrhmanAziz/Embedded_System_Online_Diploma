#include<stdio.h>

struct Sdata
{
	int x;
	char* name;

}data1,data2;

int main()
{
	struct Sdata* arr[]= { &data1,&data2 };
	struct Sdata* (*ptr) [2] = &arr;

	(*(*ptr))->x = 90;
	(*(*ptr))->name = "Ahmed";

	(*(*ptr+1))->x= 120  ;
	(*(*ptr+1))->name = "mohammed";

	printf("%d  %s \n",data1.x , data1.name);
	printf("%d  %s \n",data2.x , data2.name);

	return 0;
}














