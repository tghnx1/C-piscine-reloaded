/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkokorev <mkokorev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:45:34 by mkokorev          #+#    #+#             */
/*   Updated: 2023/11/07 18:54:14 by mkokorev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar (char c);

void ft_print_numbers(void) {
	char i = 48;
	while (i <= 57) {
		ft_putchar(i);
		i++;
	}
}
/*
int main () {
	ft_print_numbers();
	return (0);
}
*/
