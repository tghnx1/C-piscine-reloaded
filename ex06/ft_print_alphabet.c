/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkokorev <mkokorev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:58:39 by mkokorev          #+#    #+#             */
/*   Updated: 2023/11/07 18:16:09 by mkokorev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void ft_putchar(char c);

void ft_print_alphabet(void) {
	char ch;
	ch = 'a';
	while (ch <= 'z') {
		ft_putchar(ch);
		ch++;
	}
}
/*
int main() {
	ft_print_alphabet();	
	return 0;
}
*/
