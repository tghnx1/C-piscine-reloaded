/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkokorev <mkokorev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:12:49 by mkokorev          #+#    #+#             */
/*   Updated: 2023/11/08 16:27:39 by mkokorev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int ft_sqrt(int nb){
	int sqrt = 1;
	while (sqrt * sqrt <= nb) {
		if (sqrt * sqrt == nb)
		return (sqrt);	
		else
		sqrt++;
	}
	return (0);
}
/*
int main () {
	printf("%d", ft_sqrt(100));
	return (0);
}
*/
