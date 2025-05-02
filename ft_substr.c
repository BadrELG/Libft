#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
        char *str;
        size_t i;
        size_t j;

        if (s == NULL)
                return (NULL);
        if (start > ft_strlen(s))
        {
                str = malloc(sizeof(char));
                if (str == NULL)
                        return (NULL);
                str[0] = '\0';
                return (str);
        }
        i = ft_strlen(s) - start;
        if (len > i)
                j = i;
        else
                j = len;
        str = malloc((j + 1) * sizeof(char));
        if (str == NULL)
                return (NULL);
        ft_strlcpy(str, s + start, j + 1);
        return (str);
}