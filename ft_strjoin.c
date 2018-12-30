/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 21:37:20 by mhernand          #+#    #+#             */
/*   Updated: 2018/12/02 17:47:53 by mhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*freshstring;
	int		s1_len;
	int		s2_len;
	int		i;
	int		j;

	if ((!s1) || (!s2))
		return (NULL);
	i = 0;
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	s1_len = s1_len + s2_len;
	freshstring = (char*)malloc(sizeof(char) * (s1_len + 1));
	if (!freshstring)
		return (NULL);
	j = 0;
	while (s1[j] != '\0')
		freshstring[i++] = s1[j++];
	j = 0;
	while (s2[j] != '\0')
		freshstring[i++] = s2[j++];
	freshstring[i] = '\0';
	return (freshstring);
}
