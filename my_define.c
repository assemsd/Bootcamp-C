#include <stdio.h> 
#include <stdbool.h>
#include <stdlib.h>

#define EVEN(x)(x%2==0)
#define SUCCESS 0
#define TRUE 1
#define FALSE 0


void	my_putstr(char *str)
{
    int index;

    index = 0;
	while (str[index] != '\0') {
		write(1, &str[index], 1);
		index++;
	}
}

bool my_is_even(int nbr)
{
	return ((EVEN(nbr)) ? TRUE : FALSE);
}

char* my_define(int param_1) {

    if(EVEN(param_1)) {
        return "I have an even number of arguments.";
    }
    else {
        return "I have an odd number of arguments.";
    }
}
int	my_main(int argc)
{
	if (my_is_even(argc - 1) == TRUE)
		my_putstr(my_define(argc-1));
	else
		my_putstr(my_define(argc-1));
	return (SUCCESS);
}


