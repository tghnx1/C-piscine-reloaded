/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkokorev <mkokorev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:07:20 by mkokorev          #+#    #+#             */
/*   Updated: 2023/11/10 15:14:51 by mkokorev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
//#include <unistd.h>
//#include <stdio.h>

/*
int ft_strlen(char *str)
{
	int i;

	i = 0;
       while (str[i] != '\0')
       {
	       i++;
       }	   
       return (i);    
}
*/
char *ft_strdup(char *src)
{
	char *new;
	int i;

	i = 0;
	new = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	while (src[i] != '\0')
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
/*
int main ()
{
	char str[] = "kekos";
	printf("%s", ft_strdup(str));
	return (0);
}
*/
