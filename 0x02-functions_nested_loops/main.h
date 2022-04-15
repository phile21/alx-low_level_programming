#include <stdio.h>

int main(void);

void print_alphabet(void)
{
	int a_z = 97;

	while (a_z <= 122)
	{
		putchar(a_z);
		a_z++;
	}
	putchar('\n');
}
