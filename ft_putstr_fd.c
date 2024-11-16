/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsennane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 19:31:55 by hsennane          #+#    #+#             */
/*   Updated: 2024/11/16 19:39:54 by hsennane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
	if (s == NULL)
		return ;
	ft_putchar_fd(&s,ft);
}

int main (){
	ft_putstr_fd("hajar",1);
	return 0;
}
