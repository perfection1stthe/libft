/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtraball <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 12:25:30 by mtraball          #+#    #+#             */
/*   Updated: 2021/01/27 12:18:51 by mtraball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	size_t	i;
	char	*a;

	slen = ft_strlen(s);
	if (!s || ((slen - start) < len))
		return (NULL);
	else
		a = (char *)malloc(len + 1);
	if (NULL == a)
		return (NULL);
	i = 0;
	while (start < slen && i < len)
		a[i++] = s[start++];
	a[i] = '\0';
	return (a);
}
