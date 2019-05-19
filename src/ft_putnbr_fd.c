/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 14:47:53 by mimeyer           #+#    #+#             */
/*   Updated: 2019/05/19 14:55:15 by mimeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putnbr_fd(int n, int fd)
{
    if (n < 0)
    {
	n *= -1;
	ft_putchar_fd('-', fd);
    }
    if (n > 9)
	ft_putnbr_fd(n / 10, fd);
    ft_putchar_fd(n % 10 + 48, fd);
}
