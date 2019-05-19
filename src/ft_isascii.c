/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 11:50:41 by mimeyer           #+#    #+#             */
/*   Updated: 2019/05/19 11:50:43 by mimeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
    {
	return (1);
    }
    return (0);
}