#include"main.h"
/**
* print_rev - check the code
*@s:string
* 
*/
void print_rev(char *s)
{
int longe=0;
int i;
while (*s != '\0')
{
longe++;
s++;
}
s--;
for (i = longe; i > 0; i--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
