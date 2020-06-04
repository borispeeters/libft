/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 15:11:34 by bpeeters      #+#    #+#                 */
/*   Updated: 2019/11/22 15:30:18 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_setcheck(char c, const char *set)
{
	int i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char			*ft_strtrim(const char *s1, const char *set)
{
	int		i;
	int		j;
	int		len;
	char	*str;

	i = 0;
	j = 0;
	if (!s1)
		return (0);
	if (!set)
		return (ft_strdup(s1));
	while (ft_setcheck(s1[i], set))
		i++;
	while (s1[j] != '\0')
		j++;
	j--;
	while (ft_setcheck(s1[j], set) && j > i)
		j--;
	len = j - i + 1;
	str = ft_substr(s1, i, len);
	return (str);
}
