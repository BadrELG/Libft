#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
        char *lst;

        lst = NULL;
        while (*s)
        {
                if (*s == (char)c)
                        lst = (char *)s;
                s++;
        }
        if (*s == (char)c)
                return ((char *)s);
        return (lst);
}