/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsozan <hsozan@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 10:33:53 by hsozan            #+#    #+#             */
/*   Updated: 2022/01/16 10:34:08 by hsozan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <string.h>
** SYNOPSIS: locate a substring in a string
**
** DESCRIPTION:
** 		The strstr() function locates the first occurrence of the null-
**	terminated string s2 in the null-terminated string s1.
*/

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] == needle[j] && haystack[i + j] != '\0')
		{
			if (needle[j + 1] == '\0')
				return ((char *)&haystack[i]);
			j++;
		}
		i++;
	}
	return (0);
}
