# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft.h"

int main()
{
	if (strncmp("he\xffllo", "\xff", 5) == ft_strncmp("he\xffllo", "\xff", 5))
		return (0);
	else
		return (-1);
}
