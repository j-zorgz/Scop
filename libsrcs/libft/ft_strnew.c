/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marnaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 13:29:36 by marnaud           #+#    #+#             */
/*   Updated: 2016/09/01 23:55:06 by marnaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*res;

	res = (char*)mallocp(size);
	if (!res)
		return (NULL);
	i = 0;
	while (i < size)
		res[i++] = '\0';
	return (res);
}
