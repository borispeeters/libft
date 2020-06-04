/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 17:32:26 by bpeeters      #+#    #+#                 */
/*   Updated: 2019/11/25 12:06:49 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t ih;
	size_t in;
	size_t temp;

	ih = 0;
	in = 0;
	if (needle[0] == '\0')
		return ((char*)haystack);
	while (needle[in] != '\0' && haystack[ih] != '\0' && ih <= len)
	{
		temp = ih;
		in = 0;
		while ((haystack[ih] == needle[in] || needle[in] == '\0') && ih <= len)
		{
			if (needle[in] == '\0')
				return ((char*)&haystack[temp]);
			ih++;
			in++;
		}
		ih = temp;
		ih++;
	}
	return (NULL);
}
