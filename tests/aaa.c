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

int main()
{
	printf("%d\n", INT_MAX);
	printf("%d\n", INT_MAX + 1);
	printf("%d\n", INT_MAX + 2);
	printf("%d\n", INT_MIN - 1);
	printf("%d\n", INT_MIN - 2);
	printf("%d\n", 2147483648);
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
