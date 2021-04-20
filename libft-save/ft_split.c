/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demilan <demilan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 10:53:35 by demilan           #+#    #+#             */
/*   Updated: 2021/04/20 20:16:48 by demilan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	elements(const char *s, char c)
{
	size_t	i;
	int		elem;
	int		isseparator;

	isseparator = 1;
	elem = 0;
	i = 0;
	while (s[i])
	{
		if (isseparator == 1)
		{
			if (s[i] != c)
			{
				elem++;
				isseparator = 0;
			}
		}
		else if (s[i] == c)
			isseparator = 1;
		i++;
	}
	return (elem);
}


// можно использовать ft_substr, посчитав длину
char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	g;
	char	**str;

	if (s == NULL)
		return (NULL);
	str = (char **)malloc((elements(s, c))* sizeof(char *));
	if (str == NULL)
		return (NULL);
	i = 0;
	j = 0;
	g = 0;
	while (s[i] != '\0' && ft_strlen(s) > i)
	{
		if (s[i] != c)
		{
			j = i;
			while (s[i] != c && s[i] != '\0')
				i++;
			str[g] = ft_substr(s, j, i - j);
			if (str[g] == NULL)
			{
				while (g >= 0)
				{
					free(str[g]);
					g--;
				}
				return (NULL);
			}
			g++;
		}
		i++;
	}
	return (str);
}

// static size_t ft_part_len(const char *str, char separator)
// {
//  size_t len;

//  len = 0;
//  while (*(str + len) != 0 && *(str + len) != separator)
//   len++;
//  return (len);
// }

// static char *ft_part_dup(const char *src, char separator)
// {
//  size_t i;
//  char *dst;
//  size_t len;

//  i = 0;
//  len = ft_part_len(src, separator);
//  dst = malloc(sizeof(char) * (len + 1));
//  if (dst == NULL)
//   return (NULL);
//  while (i < len)
//  {
//   *(dst + i) = *(src + i);
//   i++;
//  }
//  *(dst + i) = 0;
//  return (dst);
// }

// static size_t ft_get_rows_count(const char *str, char separator)
// {
//  size_t count;
//  int  status;

//  count = 0;
//  status = 0;
//  while (*str != 0)
//  {
//   if (status == 0)
//   {
//    if (*str != separator)
//    {
//     count++;
//     status = 1;
//    }
//   }
//   else if (*str == separator)
//    status = 0;
//   str++;
//  }
//  return (count);
// }

// char **ft_split(char const *s, char c)
// {
//  char **mas;
//  size_t count;
//  size_t i;

//  if (s == NULL)
//   return (NULL);
//  i = 0;
//  count = ft_get_rows_count(s, c);
//  if (count == 0)
//   return (NULL);
//  mas = malloc(sizeof(char *) * (count + 1));
//  while (i < count)
//  {
//   while (*s == c)
//    s++;
//   mas[i] = ft_part_dup(s, c);
//   s += ft_part_len(s, c);
//   i++;
//  }
//  mas[i] = NULL;
//  return (mas);
// }

// int main()
// {
// 	char *s = "gg hdhdhh";
// 	ft_split(s, " ");
// 	while(1);
// }