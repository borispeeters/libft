/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 15:07:44 by bpeeters      #+#    #+#                 */
/*   Updated: 2019/11/08 17:37:36 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t ret;

	if (src == 0)
		return (0);
	ret = ft_strlen(src);
	if (dstsize == 0)
		return (ret);
	i = 0;
	if (dstsize > 0)
		dstsize--;
	while (i < dstsize && src[i] != '\0')
	{
		dst[i] = (char)src[i];
		i++;
	}
	dst[i] = '\0';
	return (ret);
}
