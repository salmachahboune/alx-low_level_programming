#include"main.h"
/**
* _strcpy - check the code
*@dest:string
*@src:string
*return : string
*/
char *_strcpy(char *dest, char *src)
{
int i;
int  l = 0;
int x ;

while (*(src + 1) != '\0')
{
l++;
}
for (x = 0 ; x < l ; x++)
{
dest[x] = src[x];
}
dest[l] = '\0';
return (dest);
}
