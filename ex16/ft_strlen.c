/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkokorev <mkokorev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:44:54 by mkokorev          #+#    #+#             */
/*   Updated: 2023/11/08 16:55:05 by mkokorev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int ft_strlen(char *str) {
	int i = 0;
	while (str[i] != '\0') {
		i++;
		}
	return (i);
}
/*
int main () {
	char str[] = "kekos";
	printf("%d", ft_strlen(str));
return (0);
}
/*
