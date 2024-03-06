/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkokorev <mkokorev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:28:54 by mkokorev          #+#    #+#             */
/*   Updated: 2023/11/08 16:43:21 by mkokorev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char ft_putchar (char c);
void ft_putstr(char *str)
{
	int i = 0;
	while (str[i] !='\0') {
		ft_putchar(str[i]);
		i++;
	}
}
/*
int main() {
	char str[] = "kekos";
	ft_putstr(str);
	return (0);
}
*/
