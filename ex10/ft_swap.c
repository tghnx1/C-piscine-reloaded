/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkokorev <mkokorev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:34:39 by mkokorev          #+#    #+#             */
/*   Updated: 2023/11/07 18:41:42 by mkokorev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <stdio.h>

void ft_swap(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
       *b = temp;	
}

/*
int main () {
	int r = 2;
	int l = 3;
	ft_swap(&r, &l);
	printf("%d, %d", r, l);
	return (0);
}*/
