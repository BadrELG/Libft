#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
        unsigned char *ptr;
        unsigned char *ptdr;

        if (!src && !dest)
                return (NULL);
        ptr = (unsigned char *)dest;
        ptdr = (unsigned char *)src;

        while (n > 0)
        {
                *ptr = *ptdr;
                ptr++;
                ptdr++;
                n--;
        }
        return (dest);
}