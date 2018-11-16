#include <stdlib.h>
#include <stdio.h>
#include "tail.h"

void tail( const size_t argv_size)
{
	char *charTab = (char*)malloc(sizeof(char) * argv_size);
	size_t counter = 0;
	char c = (char)getchar();
	while (c != EOF)
	{
		charTab[counter] = c;
		counter = ((size_t)(counter + 1) == argv_size) ?  0 : (counter + 1);
		c = getchar();
	}
	for (size_t i = 0; i < argv_size; i++)
	{
		printf("%c", charTab[counter]);
		counter = ((counter + 1) == argv_size) ?  0 : (counter + 1);
	}
	printf("\n");
	free(charTab);
}

