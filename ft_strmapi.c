#include "libft.h"

static int      ft_len(const char *str)
{
        int     i;

        i = 0;
        while (str[i])
        {
                i++;
        }
        return (i);
}

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
        int len;
        char *str;
        unsigned int i;

        len = ft_len(s);
        i = 0;
        str = (char *)malloc(len + 1);
        if (!s || !f || !str)
                return (NULL);
        while (s[i])
        {
                str[i] = (*f)(i, s[i]);
                i++;
        }
        str[i] = '\0';
        return (str);
}