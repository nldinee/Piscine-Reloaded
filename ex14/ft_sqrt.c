/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabdelba <nabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/26 23:21:11 by nabdelba          #+#    #+#             */
/*   Updated: 2019/03/26 23:30:20 by nabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;

	i = -1;
	if (nb == 1)
		return (nb);
	while (i++ < (nb / 2))
		if (i * i == nb)
			return (i);
	return (0);
}
