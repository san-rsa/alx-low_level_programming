#include "main.h"

/**
 *_strcat - concatenates two strings
 *@dest: A pointer to a character that will be changed
 *@src: A pointer to a character that will also be changed
 *Return: dest
 */

char *_strcat(char *dest, char *src)
{
int x;
int y;

x = 0;
while (dest[x] != '\0')
{
x++;
}

y = 0;
while (src[y] != '\0')
{
dest[x] = src[y];
y++;
x++;
}

dest[x] = '\0';

return (dest);
}
