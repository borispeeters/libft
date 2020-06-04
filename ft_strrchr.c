/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 18:00:13 by bpeeters      #+#    #+#                 */
/*   Updated: 2019/11/20 20:33:29 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	if (c == '\0')
	{
		while (s[i] != '\0')
			i++;
		ptr = (char*)&s[i];
		return (ptr);
	}
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == c)
		{
			ptr = (char*)&s[i];
			return (ptr);
		}
		i--;
	}
	return (NULL);
}
