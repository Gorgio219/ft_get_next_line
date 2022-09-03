/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbomber <pbomber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 16:42:36 by pbomber           #+#    #+#             */
/*   Updated: 2021/12/07 21:16:30 by pbomber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strdup(const char *s)
{
	char	*p;
	size_t	num;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	num = 0;
	while (*s)
	{
		s++;
		num++;
	}
	p = (char *)malloc(sizeof(char) * (num + 1));
	if (!p)
		return (NULL);
	while (num + 1)
	{
		p[num] = *(char *)s;
		num--;
		s--;
	}
	return (p);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str)
		return (NULL);
	while (s1[j])
		str[i++] = s1[j++];
	j = 0;
	while (s2[j])
		str[i++] = s2[j++];
	str[i] = '\0';
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;

	if (!s)
		return (NULL);
	if (start >= (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	i = 0;
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	while (len)
	{
		str[i] = (char)s[start];
		start++;
		i++;
		len--;
	}
	str[i] = '\0';
	return (str);
}
