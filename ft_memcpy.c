/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 11:39:58 by bpeeters      #+#    #+#                 */
/*   Updated: 2019/11/14 15:49:57 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*sd;
	char	*ss;

	if (dst == 0 && src == 0)
		return (0);
	i = 0;
	sd = dst;
	ss = (char*)src;
	while (i < n)
	{
		sd[i] = ss[i];
		i++;
	}
	return (dst);
}
