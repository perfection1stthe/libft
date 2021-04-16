/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtraball <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 12:30:57 by mtraball          #+#    #+#             */
/*   Updated: 2021/04/15 13:10:15 by mtraball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n--)
	{
		if (*(char *)s1 != *(char *)s2)
			return ((unsigned char)*(char *)s1 - (unsigned char)*(char *)s2);
		++s1;
		++s2;
	}
	return (0);
}
