#include <stdio.h>
#include <stdlib.h>
#include "tail.h"
 int main (int argc, const char *argv[])
{
	if (argc != 2)
		return -1;
	const int value_of_argv_one = strtol(argv[1], NULL, 10);
	tail(value_of_argv_one);
	return 0;
}
