#ifndef GARBAGE_COLLECTOR_H
# define GARBAGE_COLLECTOR_H

# include "libft.h"

typedef struct s_malloc_lst
{
	void				*content;
	int					lock;
	struct s_malloc_lst	*next;
	struct s_malloc_lst	*prev;
}						t_garbage;

// garbage_collector.c
t_garbage	*garbage_lstnew(void);
t_garbage *garbage_lstlast(t_garbage **lst);
void	garbage_lstaddback(t_garbage *new, t_garbage **lst);
void	garbage_lstclear(t_garbage **lst);
//ft_malloc.c
t_garbage *set_garbage(void);
t_garbage *get_garbage(t_garbage *update, int reset);
void	*g_malloc(size_t size);
void	garbage_destroy(void);
//ft_free.c
void	g_free(void *ptr);
#endif