#include <stdio.h>
/**
 *main- displays
 *Description: displays lowercase and upcase alph
 *Return: Always zero
 */
int main (void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
for (ch = 'A'; ch <= 'Z'; ch++)
putchar(ch);
putchar(‘\n’);
return (0);
}
