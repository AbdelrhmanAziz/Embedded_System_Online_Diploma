#include <stdio.h>
#include <string.h>

void rev(void);
void rev()
{
	char s;
	scanf("%c",&s);
	if(s != '\n')
	{
		rev();
		printf("%c",s);
	}


}

int main()
{

	printf("Enter a sentence: ");
	fflush(stdin);fflush(stdout);
	rev();

	return 0;
}

