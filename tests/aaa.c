# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <signal.h>
# include <ctype.h>

// void f()
// {

// 	exit(123);
// }


static void ft1(char *s, int fd)
{
	if (s == NULL)
		return ;
	write(fd, s, strlen((const char *)s));
}

void	ft_put_c(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_put_d(int n, int fd)
{
	long	num;

	num = (long)n;
	if (num < 0)
	{
		ft_put_c('-', fd);
		num = -num;
	}
	if (num >= 10)
	{
		ft_put_d(num / 10, fd);
		ft_put_d(num % 10, fd);
	}
	else
		ft_put_c(num + '0', fd);
}

void	exit_fatal(int line, char *file)
{
	write(STDERR_FILENO, "STDLIB ERROR\n", 13);
	ft1(file, STDERR_FILENO);
	write(STDERR_FILENO, ":", 1);
	ft_put_d(line, STDERR_FILENO);
	write(STDERR_FILENO, "\n", 1);
}

// #include <stdio.h>
// #define DEF "100"
// int main(){
// printf("#defineで定義された定数は" DEF "です");
// }

int main()
{
	const char	*big = "Foo Bar Baz";
	const char	*small = "Bar";
	char		*ft;
	char		*libc;

	// ft = ft_strnstr(big, small, 6);
	libc = strnstr(big, small, 7);
	char s[100] = "aaaa";
	printf("[%c]\n", tolower(0));
	printf("[%c]\n", tolower(-1));
	printf("1%s\n", strnstr(NULL, s, 0));
	printf("2%s\n", strnstr(NULL, NULL, 0));
	printf("%s\n", strnstr(NULL, NULL, 0));
	printf("%d\n", strnstr(s, NULL, 0));
	printf("%d\n", strnstr(s, NULL, 0));
	// printf("%d\n", strncmp(NULL, s, 1));
	// printf("%d\n", strlcat(NULL, s, 0));
	// printf("%zu\n", strlcat(NULL, NULL, 0));
	// exit_fatal(__LINE__, __FILE__);
	// char *a = NULL;
	// *a = 1;
	// signal(SIGSEGV, f);
	// if (pid = child)
	// {
	// 	f();
	// 	exit();
	// }
	// wait();

}
