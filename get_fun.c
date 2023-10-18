#include "main.h"


struct printer
{
        char type;
        int (*func)(va_list);
};
  
	
	struct printer  printers[] = {
                {'c', print_characters},
                {'s', print_strings},
                {'%', print_percent},
                {'d', print_decimals},
                {'i', print_integers},
                {'\0', NULL}
        };

int (*get_function(char type))(va_list)
{
	struct printer *ptr = printers;
	int j = 0;
	
	while (ptr[j].type != '\0')
	{
		if (ptr[j].type == type)
		{
			return (ptr[j].func);
		}
		j++;
	}
	return(NULL); 
}
