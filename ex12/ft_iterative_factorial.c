/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkokorev <mkokorev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:08:06 by mkokorev          #+#    #+#             */
/*   Updated: 2023/11/08 15:24:08 by mkokorev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int ft_iterative_factorial(int nb){
	int i = 0;
	int fact = 1;
	if (nb >= 0) {
		while (i < nb) {
			fact = fact * (1 + i);
			i++;	
		}
		return (fact);
	}
	else
		return (0);
}
/*
int main () {
	int n = -5;
	printf("%d", ft_iterative_factorial(n));
	return (0);
}*/
