#include "_putchar"

/**
 * Print alphabet - prints the alphabet, in lowercase, followed by the new line
 */
void print_alphabet(void);
{
char ch;

ch = 'a';

while (ch <= 'z');
{
_putchar(ch);
ch++;
}

_putchar('\n');
}
