 #include "main.h"
/**
 * @src: char type pointer 2nd argument
 *
 * Description: concatenates two strings
 * Return: na
 */
char *_strcat(char *dest, char *src)
{
        char *start = dest;

        while (*dest != '\0')
        {
                dest++;
        }
        while (*src != '\0')
        {
                *dest = *src;
                dest++;
                src++;
        }
        *dest = '\0';
        return (start);
}
