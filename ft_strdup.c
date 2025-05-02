#include "libft.h"

char    *ft_strdup(const char *s)
{
        size_t i = 0;
        char *dup;

        while (s[i])
                i++;
        dup = (char *)malloc((i + 1) * sizeof(char));
        if (!dup)
                return (NULL);
        i = 0;
        while (s[i])
        {
                dup[i] = s[i];
                i++;
        }
        dup[i] = '\0';
        return (dup);
}