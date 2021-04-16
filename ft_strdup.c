/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtraball <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 16:28:05 by mtraball          #+#    #+#             */
/*   Updated: 2021/04/15 17:16:28 by mtraball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char        *ft_strdup(char *src)
{
    char    *ptr;
    int     i;

    i = 0;
    while (src[i])
        i++;
    ptr = malloc(sizeof(char) * i);
    if (!(ptr))
        return (0);
    if (ptr)
    {
        i = 0;
        while (src[i])
        {
            ptr[i] = src[i];
            i++;
        }
        ptr[i] = 0;
        return (ptr);
    }
    else
        return (0);
}
