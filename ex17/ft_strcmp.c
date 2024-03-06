/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkokorev <mkokorev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:55:45 by mkokorev          #+#    #+#             */
/*   Updated: 2023/11/08 17:28:11 by mkokorev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int ft_strcmp(char *s1, char *s2) {
	int i = 0;
	int a;
	while (s1[i] != '\0' ||  s2[i] != '\0') {
		if (s1[i] != s2[i]) {
			a = s1[i] - s2[i];			
			return (a);
		}
		else 
			i++;
	}
	return (0);
}
/*
int main () {
	char str1[] = "kekostar";
	char str2[] = "kekos";
	printf("%d\n", ft_strcmp(str1, str2));
	printf("%d", strcmp(str1, str2));

return (0);
}
*/
