# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <signal.h>

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

int main()
{
	exit_fatal(__LINE__, __FILE__);
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
