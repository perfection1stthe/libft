/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtraball <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 16:27:43 by mtraball          #+#    #+#             */
/*   Updated: 2021/04/15 13:04:38 by mtraball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	char	*p;

	p = malloc(nelem * elsize);
	if (p == NULL)
		return (NULL);
	p = ft_memset(p, 0, nelem * elsize);
	return (p);
}
