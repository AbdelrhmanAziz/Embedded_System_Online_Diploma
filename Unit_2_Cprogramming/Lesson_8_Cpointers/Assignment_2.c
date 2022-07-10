#include <stdio.h>


int main ()
{


    char arr[26];
    char* ptr = arr;

    int i;
    for(i ='A' ; i<='Z' ; i++,ptr++)
    {
    	*ptr = i;
    	printf("%c\n",*ptr);
    }








	return 0;
}









