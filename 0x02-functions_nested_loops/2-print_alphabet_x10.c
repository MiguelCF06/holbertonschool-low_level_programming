#include "holberton.h"
void print_alphabet_x10(void)
{
int letra = 'a';
int tiempo;
while(tiempo < 10)
{
for(letra = 'a' ; letra <= 'z'; letra++)
{
_putchar(letra);
}
_putchar('\n');
tiempo++;
}           

}
