/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bpeeters <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/01 11:12:53 by bpeeters      #+#    #+#                 */
/*   Updated: 2019/11/21 11:55:22 by bpeeters      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_intlen(int n)
{
	int len;

	if (n == -2147483648)
		return (12);
	len = 2;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n > 9)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static	void	ft_strass(char *str, int n, int i)
{
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	if (n > 9)
		ft_strass(str, n / 10, i - 1);
	str[i - 1] = n % 10 + '0';
}

char			*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = ft_intlen(n);
	str = malloc(sizeof(char) * len);
	if (str == 0)
		return (0);
	if (n == -2147483648)
	{
		n = -214748364;
		str[len - 2] = '8';
		ft_strass(str, n, len - 2);
	}
	else
		ft_strass(str, n, len - 1);
	str[len - 1] = '\0';
	return (str);
}
