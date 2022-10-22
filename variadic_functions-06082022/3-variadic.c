#include <stdio.h>
#include <stdarg.h>

int add_up(int num, ...)
{
	/* declaration of variables */
	va_list our_list;
	int index;
	int sum;

	/* initialize */
	va_start(our_list, num);

	sum = 0;
	for (index = 0; index < num; index++)
	{
		sum += va_arg(our_list, int);
	}
	printf("%d\n", sum);
	va_end(our_list);

	return (sum);
}

int main(void)
{
	add_up(5, 2, 1, 3, 2, 1);
	add_up(3, 6, 1, 2);
	add_up(7, 1, 1, 3, 2, 1, 1, 2);
	//add_up(3, 2, 1, 1, 2);
	add_up(7, 1, 1, 3, 2, 3);

	return (0);
}
