/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phakakos <phakakos@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 14:37:54 by phakakos          #+#    #+#             */
/*   Updated: 2019/10/28 14:38:16 by phakakos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*ss;

	i = 0;
	ss = (char *)s;
	if (n == 0)
		return ;
	while (i < n)
	{
		ss[i] = '\0';
		i++;
	}
}
