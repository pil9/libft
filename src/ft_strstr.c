#include "../includes/libft.h"

char *ft_strstr(char const *haystack, char const *needle)
{
    int h;
    int n;
    int len;

    h = 0;
    len = 0;
    while (needle[len] != '\0')
        len++;
    if (len == 0)
        return ((char *)haystack);
    while (haystack[h] != 0)
    {
        n = 0;
        while (needle[n] == haystack[h + n] &&
               haystack[h + n] != 0 && needle[n] != 0)
        {
            if (needle[n + 1] == '\0')
                return ((char *)haystack + h);
            n++;
        }
        h++;
    }
    return (NULL);
}
