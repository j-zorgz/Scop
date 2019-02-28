/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marnaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 11:40:40 by marnaud           #+#    #+#             */
/*   Updated: 2015/11/24 10:53:52 by marnaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char *cur;

	if (n != 0)
	{
		cur = (unsigned char*)s;
		while (n--)
		{
			*cur = 0;
			if (n)
				cur++;
		}
	}
}
