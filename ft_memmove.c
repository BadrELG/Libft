#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t len)
{
        unsigned char *dest_ptr;
        unsigned const char *src_ptr;
        size_t i;

        dest_ptr = (unsigned char *)dest;
        src_ptr = (unsigned const char *)src;
        i = 0;
        if (dest == NULL && src == NULL)
                return (NULL);
        if (src_ptr < dest_ptr)
        {
                while (len > 0)
                {
                        len--;
                        dest_ptr[len] = src_ptr[len];
                }
        }
        else
                while (i < len)
                {
                        dest_ptr[i] = src_ptr[i];
                        i++;
                }
        return (dest);
}