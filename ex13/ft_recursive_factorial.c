/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkokorev <mkokorev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:26:16 by mkokorev          #+#    #+#             */
/*   Updated: 2023/11/08 15:41:36 by mkokorev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int ft_iterative_factorial(int nb) {
	int fact = 1;
	if (nb < 0)
		return 0;
	else if (nb == 0)
		return (1);
	else {
	fact = nb * (ft_iterative_factorial(nb - 1));
	}
	return (fact);
}
/*
int main () {
	int n = 3;
	printf("%d", ft_iterative_factorial(n));
	return (0);
}*/
