/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimeyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 11:50:27 by mimeyer           #+#    #+#             */
/*   Updated: 2019/05/20 13:26:48 by mimeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int ch)
{
    if (((ch > 64) && (ch < 91)) || ((ch > 96) && (ch < 123)))
        return (1);
    else
        return (0);
}
