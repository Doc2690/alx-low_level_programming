#include <stdio.h>
int main(void)
{
	char *sh = "Dorcas";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}

