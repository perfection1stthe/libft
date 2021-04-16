/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtraball <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 12:30:39 by mtraball          #+#    #+#             */
/*   Updated: 2021/04/15 12:59:02 by mtraball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	void	 *temp;

	if (!dst && !src)
		return (0);
	temp = dst;
	if (src < dst)
	{
		src += n;
		dst += n;
		while (n--)
			*(char*)--dst = *(char*)--src;
	}
	else
	{
		while (n--)
			*(char *)dst++ = *(char *)src++;
	}
	return (temp);
}
