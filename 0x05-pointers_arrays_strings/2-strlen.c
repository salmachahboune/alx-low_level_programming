#include"main.h"

/**
* _strlen - check the code
*@s:string
* Return: lenght
*/
int _strlen(char *s)
{
int longe=0;
while  (*s != '\0')
{
longe++;
s++;
}
return(longe);
}
