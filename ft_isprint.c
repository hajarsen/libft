/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsennane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 12:03:11 by hsennane          #+#    #+#             */
/*   Updated: 2024/11/16 12:05:28 by hsennane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c){
	return (c >= 32 && c <= 126);
}
