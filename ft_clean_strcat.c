char*   ft_strcat(char* dest, char* src)
{
        int     count;
        int     size_dest;

        /*
        ** getting the size of the string in char* dest
        */
        count = 0;
        size_dest = -1; 
        while (dest[++size_dest] != '\0');

        /*
        ** Add str2 at the end of str1
        */
        while (src[count] != '\0')
        {
            dest[(size_dest + count)] = src[count]; 
            count++;
        }

        /*
        ** add the final \0
        */
        dest[(size_dest + count)] = '\0';
        return (dest);
}
