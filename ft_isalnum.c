/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 11:49:34 by mimeyer           #+#    #+#             */
/*   Updated: 2019/05/20 15:55:31 by mimeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalnum(int ch)
{
	if (((ch > 64) && (ch < 91)) || ((ch > 96) && (ch < 123)) || ((ch > 47)
		&& (ch < 58)))
		return (1);
	else
		return (0);
}