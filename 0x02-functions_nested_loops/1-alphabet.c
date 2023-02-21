#include"main.h"
/**
 * main -  prints the alphabet, in lowercase, followed by a new line.
 * description - You can only use _putchar twice in your code
 * Return: 0
 */
void print_alphabet(void)

{
int i;
for (i = 'a' ; i <= 'z' ; i++)
{
_putchar(i);
}
_putchar('\n');
}
