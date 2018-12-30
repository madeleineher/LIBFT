/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 14:27:31 by mhernand          #+#    #+#             */
/*   Updated: 2018/11/20 11:18:52 by mhernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int nb)
{
	if (nb >= 65 && nb <= 90)
		return (nb + 32);
	else
		return (nb);
}
