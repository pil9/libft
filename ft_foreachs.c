/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreachs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 14:16:22 by mimeyer           #+#    #+#             */
/*   Updated: 2019/06/11 14:18:13 by mimeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreachs(char *tab, int length, void (*f)(char))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}