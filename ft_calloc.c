#include "libft.h"

//malloc mais initialise la memoire a 0
void    *ft_calloc(size_t nmemb, size_t size)
{
        char *ptr;
        size_t nmemb_size;
        size_t i;

        nmemb_size = nmemb * size;
        i = 0;
        if (nmemb_size == 0)
                return (malloc(1));
        if (nmemb == 0 || size == 0 || nmemb != nmemb_size / size)
                return (NULL);
        ptr = malloc(nmemb_size);
        if (!ptr)
                return (NULL);
        while (nmemb_size > i)
                ptr[i++] = 0;
        return (ptr);
}