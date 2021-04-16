/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtraball <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 12:26:18 by mtraball          #+#    #+#             */
/*   Updated: 2021/04/15 13:37:21 by mtraball         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	long	num;

	num = n;
	len = n > 0 ? 0 : 1;
	num = num > 0 ? num : -num;
	while (n)
	{
		n /= 10;
		len++;
	}
	str = (char *)malloc(len + 1);
	if (!(str))
		return (0);
	*(str + len--) = '\0';
	while (num > 0)
	{
		*(str + len--) = num % 10 + '0';
		num /= 10;
	}
	if (len == 0 && str[1] == '\0')
		*(str + len) = '0';
	else if (len == 0 && str[1] != '\0')
		*(str + len) = '-';
	return (str);
}
