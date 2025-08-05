/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   garbage_collector.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badr <badr@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 00:01:01 by badr              #+#    #+#             */
/*   Updated: 2025/08/05 14:11:42 by badr             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GARBGE_COLLECTOR_H
# define GARBGE_COLLECTOR_H

# include "libft.h"

typedef struct s_malloc_lst
{
    void			*content;
    int				lock;
    struct s_malloc_lst	*next;
    struct s_malloc_lst	*prev;
}   t_garbage;

// gabge_collector.c
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

/// Fichier pas normée