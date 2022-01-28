/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thinguye <thinguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 17:39:03 by thinguye          #+#    #+#             */
/*   Updated: 2019/10/17 17:58:10 by thinguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) ||
		(c >= 65 && c <= 90) ||
		(c >= 97 && c <= 122))
		return (1);
	return (0);
}