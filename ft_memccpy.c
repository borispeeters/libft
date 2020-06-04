/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 14:18:25 by bpeeters      #+#    #+#                 */
/*   Updated: 2019/11/14 15:49:17 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*sd;
	unsigned char	*ss;

	sd = (unsigned char*)dst;
	ss = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		sd[i] = ss[i];
		if (ss[i] == (unsigned char)c)
			return (&sd[i + 1]);
		i++;
	}
	return (NULL);
}
