#include <stdlib.h>
#include <stdio.h>
#include "tail.h"

void tail(const int value_of_argv_one)
{
	char *charTab = (char*)malloc(sizeof(char) * value_of_argv_one);
	char c = (char)getchar();
	size_t counter = 0;
	while (c != EOF)
	{
		charTab[counter] = c;
		counter = ((counter + 1) == value_of_argv_one) ?  0 : (counter + 1);
		c = getchar();
	}
	for (size_t i = 0; i < value_of_argv_one; i++)
	{
		printf("%c", charTab[counter]);
		counter = ((counter + 1) == value_of_argv_one) ?  0 : (counter + 1);
	}
	printf("\n");
	free(charTab);
}
