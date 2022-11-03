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
                sum += va_arg(our_list, int); //sum = sum + (next member)
	}
        printf("%d\n", sum);
        va_end(our_list);

        return (sum);
}

int main(void)
{
        add_up(5, 2, 1, 3, 2, 1); //9
        add_up(3, 6, 1, 2);       //9
        add_up(7, 1, 1, 3, 2, 1, 1, 2); //11

        add_up(3, 2, 1, 1, 2);
	/**
	 * Line number 31 was executed as follows:
         * since the first argument(3) represents the number
         * of variables to be added, hence,
         * the function call will add only the first 3 variables(2,1,1)
         * ignoring the last variable 4.
	 */

	add_up(7, 1, 1, 3, 2, 3);
        /**
         * Here on line 40, the variables in the list are just 5, but you
         * specific the number of variables to be added as 7
         * the problem is going to assume any 2 variables of the type
         * int to complete a total of 7 variables and then add.
         */

        return (0);
}
