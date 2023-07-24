#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates the password "Tada! Congrats"
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char password[] = "Tada! Congrats";
int i, sum;

sum = 0;

srand(time(NULL));

for (i = 0; i < sizeof(password) - 1; i++)
{
sum += password[i];
putchar(password[i]);
}

int last_char = 2772 - sum;
putchar(last_char);
return (0);
}
