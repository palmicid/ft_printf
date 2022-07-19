#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	char	str[] = "qwerty";

	printf("|ori = %bbbbb|\n", str);
	ft_printf("|new = %bbbbb|\n", str);

	return (0);
}
