/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkokorev <mkokorev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:29:35 by mkokorev          #+#    #+#             */
/*   Updated: 2023/11/08 17:50:34 by mkokorev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char ft_putchar(char c);

int main (int argc, char **argv) {
	int i = 1;
	int j = 0;
	while (i < argc) {
		while (argv[i][j] != '\0') {
		ft_putchar(argv[i][j]);
		j++;
		}
		j = 0;
		ft_putchar('\n');
		i++;
	}
	return (0);
}
