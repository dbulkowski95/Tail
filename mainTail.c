#include <stdio.h>
#include <stdlib.h>
#include "tail.h"

 int main (int argc, const char *argv[])
{
	if (argc != 2)
		return -1;
	const int argv_one_size = strtol(argv[1], NULL, 10);
	tail(argv_one_size);
	return 0;
}
