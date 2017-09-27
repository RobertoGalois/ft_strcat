#include    <stdio.h>

char*   ft_strcat(char* dest, char* src)
{
        int     size_dest;

        /*
        ** getting the size of the string in char* dest
        */
        size_dest = -1; 
        while (dest[++size_dest] != '\0');

        /*
        ** Add str2 at the end of str1
        */
        while (*src != '\0')
            dest[size_dest++] = *(src++); 

        /*
        ** add the final \0
        */
        dest[size_dest] = '\0';
        return (dest);
}
