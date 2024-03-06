/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkokorev <mkokorev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:58:22 by mkokorev          #+#    #+#             */
/*   Updated: 2023/11/08 15:06:38 by mkokorev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod){
	*div = a / b;
	*mod = a % b;
}
/*
int main () {
	int t = 8;
	int v = 5;
	int divv;
	int modd;
	ft_div_mod(t, v, &divv, &modd);
	printf("%d, %d", divv, modd);
	return (0);
}
*/
