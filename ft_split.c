/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 15:16:14 by bpeeters      #+#    #+#                 */
/*   Updated: 2019/11/20 20:14:39 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_sublen(const char *str, char c)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (str[i] == c && str[i] != '\0')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (len);
		i++;
		len++;
	}
	return (len);
}

static	int		ft_arr_size(const char *str, char c)
{
	int i;
	int size;

	i = 0;
	size = 2;
	while (str[i] == c)
	{
		if (str[i + 1] == '\0')
			return (1);
		i++;
	}
	while (str[i] != '\0')
	{
		while (str[i] == c && str[i] != '\0')
		{
			if (str[i + 1] != c && str[i + 1] != '\0')
				size++;
			i++;
		}
		if (str[i] != '\0')
			i++;
	}
	return ((str[0] == '\0') ? 1 : size);
}

static	int		ft_freemem(char **arr, int i)
{
	while (i >= 0)
	{
		free(arr[i]);
		i--;
	}
	free(arr);
	return (1);
}

static	int		ft_fillarr(char **arr, const char *s, char c, int k)
{
	int	i;
	int	j;

	i = 0;
	while (s[k] != '\0')
	{
		j = 0;
		arr[i] = malloc(sizeof(char) * (ft_sublen(&s[k], c) + 1));
		if (arr[i] == 0)
			return (ft_freemem(arr, i - 1));
		while (s[k] == c && s[k] != '\0')
			k++;
		while (s[k] != c && s[k] != '\0')
		{
			arr[i][j] = s[k];
			k++;
			j++;
		}
		arr[i][j] = '\0';
		i++;
		while (s[k] != '\0' && s[k] == c)
			k++;
	}
	return (0);
}

char			**ft_split(const char *s, char c)
{
	char	**arr;
	int		arr_size;
	int		flag;

	if (s == 0)
		return (0);
	arr_size = ft_arr_size(s, c);
	arr = malloc(sizeof(char*) * arr_size);
	if (arr == 0)
		return (0);
	flag = ft_fillarr(arr, s, c, 0);
	if (!flag)
		arr[arr_size - 1] = NULL;
	return (arr);
}
