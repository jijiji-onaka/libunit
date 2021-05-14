# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft.h"

int main()
{
	char *s1;
char *s2;
int result;

s1 = ft_calloc(-42, -42);
s2 = calloc(-42, -42);
result = 0;
if (s1 == s2)
result = 0;
else
result = -1;
printf("%p\n", s1);
printf("%p\n", s2);
free(s1);
free(s2);
return (result);
}
