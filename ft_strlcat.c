/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 17:09:36 by bpeeters      #+#    #+#                 */
/*   Updated: 2019/11/20 20:29:59 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t id;
	size_t is;
	size_t ret;

	id = 0;
	is = 0;
	if (ft_strlen(dst) < dstsize)
		ret = ft_strlen(dst) + ft_strlen(src);
	else
		ret = dstsize + ft_strlen(src);
	if (dstsize <= ft_strlen(dst) + 1)
		return (ret);
	dstsize--;
	while (dst[id] != '\0')
		id++;
	while (src[is] != '\0' && id < dstsize)
	{
		dst[id] = (char)src[is];
		id++;
		is++;
	}
	dst[id] = '\0';
	return (ret);
}
