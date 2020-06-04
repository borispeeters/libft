/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 12:23:32 by bpeeters      #+#    #+#                 */
/*   Updated: 2019/11/14 15:50:43 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_rev(char *sd, char *ss, size_t len)
{
	size_t i;

	i = 0;
	while (i < len)
		i++;
	while (i > 0)
	{
		i--;
		sd[i] = ss[i];
	}
}

void			*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*sd;
	char	*ss;

	if (dst == 0 && src == 0)
		return (0);
	i = 0;
	sd = dst;
	ss = (char *)src;
	if (ss > sd)
	{
		while (i < len)
		{
			sd[i] = ss[i];
			i++;
		}
	}
	else
		ft_rev(sd, ss, len);
	return (dst);
}
