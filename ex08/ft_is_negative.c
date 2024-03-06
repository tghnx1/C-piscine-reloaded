/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkokorev <mkokorev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:18:18 by mkokorev          #+#    #+#             */
/*   Updated: 2023/11/07 18:25:19 by mkokorev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void ft_is_negative(int n) {
	char pos;
	pos = 'P';
	char neg;
	neg = 'N';
	if (n>=0) {
		ft_putchar(pos);
	}
	else {
		ft_putchar(neg);
	}
}
/*
int main() {
	ft_is_negative(0);
	return (0);
}*/
