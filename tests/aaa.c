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

void	ft_putchar_fd_1(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd_1(int n, int fd)
{
	long	num;

	num = (long)n;
	if (num < 0)
	{
		ft_putchar_fd_1('-', fd);
		num = -num;
	}
	if (num >= 10)
	{
		ft_putnbr_fd_1(num / 10, fd);
		ft_putnbr_fd_1(num % 10, fd);
	}
	else
		ft_putchar_fd_1(num + '0', fd);
}

void	exit_fatal(int line, char *file)
{
	write(STDERR_FILENO, "STDLIB ERROR\n", 13);
	ft1(file, STDERR_FILENO);
	write(STDERR_FILENO, ":", 1);
	ft_putnbr_fd_1(line, STDERR_FILENO);
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
