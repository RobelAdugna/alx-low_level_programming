#include "main.h"

/**
 * Print alphabet - prints the alphabet, in lowercase, followed by the new line
 */
void print_alphabet(void)
{
int j;

for (j = 'a'; j <= 'z'; j++)
{
_putchar(j);
}
_putchar('\n');
