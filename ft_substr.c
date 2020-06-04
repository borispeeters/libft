/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 14:35:13 by bpeeters      #+#    #+#                 */
/*   Updated: 2019/11/22 17:57:10 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	n;

	if (!s)
		return (0);
	n = ft_strlen(s);
	if (n - start < len)
		len = n - start;
	str = malloc(sizeof(char) * (len + 1));
	if (str == 0)
		return (0);
	if (start > n)
		return (ft_strdup("\0"));
	i = 0;
	while (i < len && s[start])
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
