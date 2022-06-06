/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lixu <lixu@student.42madrid.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 13:52:32 by lixu              #+#    #+#             */
/*   Updated: 2022/04/20 13:18:28 by lixu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
locates the first occurrence of the 
null-ter-minated string needle in the string haystack, 
where not more than len characters are searched.
*/

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	int		k;

	if (!*needle || needle == haystack)
		return ((char *)haystack);
	i = 0;
	j = 0;
	k = 0;
	while (i < len && haystack[i] && needle[j])
	{
		if (haystack[i] == needle[j])
		{
			i++;
			j++;
		}
		else
		{
			j = 0;
			i = k++;
		}
	}
	if (needle[j] == '\0')
		return ((char *)haystack + (i - j));
	return (NULL);
}

/*
char haystack[30] = "aaabcabcd";
char needle[10] = "aabc";
check(ft_strnstr(haystack, needle, -1) == haystack + 1); showLeaks();
check(ft_strnstr(haystack, "abcd", 9) == haystack + 5); showLeaks();

int	main(void)
{
	char	haystack[] = "aaabcabcd";
	char	needle[] = "aabc";
	size_t	len;

	len = -1;
	printf("const char *haystack: %s\n", haystack);
	printf("const char *needle: %s\nsize_t len: %zu\n", needle, len);
	printf("with strnstr:    %s\n", strnstr(haystack, needle, len));
	printf("with ft_strnstr: %s\n", ft_strnstr(haystack, needle, len));
}
*/
