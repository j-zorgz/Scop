/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marnaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/31 18:52:58 by marnaud           #+#    #+#             */
/*   Updated: 2016/08/31 18:53:03 by marnaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftmatrices.h>

t_vec2		ft_vec2_add(const t_vec2 v1, const t_vec2 v2)
{
	t_vec2	dst;

	dst.x = v1.x + v2.x;
	dst.y = v1.y + v2.y;
	return (dst);
}
