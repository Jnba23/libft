/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:23:11 by asayad            #+#    #+#             */
/*   Updated: 2023/11/30 15:46:34 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long int	num;

	num = (long long int)n;
	if (num < 0)
	{
		write(fd, "-", 1);
		num = num * -1;
	}
	if (num > 9)
	{
		ft_putnbr_fd((num / 10), fd);
	}
	ft_putchar_fd((num % 10) + '0', fd);
}
