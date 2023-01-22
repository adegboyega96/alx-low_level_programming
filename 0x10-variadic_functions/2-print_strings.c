#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print strings
 *
 * @n: no of string passed 
 *
 * @separator: string printed between strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list ap;
    unsigned int i;
    char *string;

    if (n == 0)
    {
	    printf("\n");
	    return;
    }

    va_start(ap, n);
    for (i = 0; i < n; i++)
    {
	    string = va_arg(ap, char *);
	    if (string == NULL)
		    string = "(nil)";

	    if (separator == NULL)
	    {
		    if (i == n - 1)
			    printf("%s\n", string);
		    else
			    printf("%s", string);
	    }
	    else
	    {
		    if (i == n - 1)
			    printf("%s\n", string);
		    else
			    printf("%s%s", string, separator);
	    }
    }

    va_end(ap);
    
}
