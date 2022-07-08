#include "main.h"
#include "stdio.h"

/**
 * fizz_buzz - prints the numbers from 1 to 100, followed by a new line
 * but for multiples of three prints Fizz instead of the number
 * and for the multiples of five prints Buzz
 * Return: Always 0 (Success)
 */
void fizz_buzz(void)
{
int i;

for (i = 1; i <= 100; i++)
{if (i % 3 == 0 && i % 5 != 0)
{
Printf(" Fizz");
}
else if (i % 5 == 0 && i % 3 != 0)
{
Printf(" Buzz");
}
else if (i % 3 == 0 && i % 5 == 0)
{
Printf(" FizzBuzz");
}
else if (i == 1)
{
Printf("%d", i);
}
else
{
Printf(" %d", i);
}
}
Printf("\n");

Return (0);
}
