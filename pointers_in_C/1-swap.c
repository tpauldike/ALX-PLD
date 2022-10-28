#include "main.h"
#include <stdio.h>

void swap_int(int *a, int *b)
{
	
	int n;
	n = *a;
	*a = *b;
	*b = n;
}