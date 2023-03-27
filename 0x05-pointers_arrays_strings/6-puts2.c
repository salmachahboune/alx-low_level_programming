#include "main.h"

/**
 * puts2 - check the code
 *@str:string
 * 
 */
void puts2(char *str)
{
int longe = 0;
int t = 0;
char *y = str;
int i;
while (*y != '\0' )
{
y++;
longe++;
}
t = longe - 1;
for (i = 0 ; i <= t ; i++ )
{
if (i % 2 == 0)
{
_putchar(str[0]);
}
}
_putchar('\n');
}
