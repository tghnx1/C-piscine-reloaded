/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkokorev <mkokorev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:59:33 by mkokorev          #+#    #+#             */
/*   Updated: 2023/11/10 13:01:58 by mkokorev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_putchar(char c);

int ft_strcmp(char *s1, char *s2) {
	int i;
	int a;

	i = 0;
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

void ft_swap (char *str1, char *str2)
{
	char temp[100];

	int i = 0;
	while (str1[i] != '\0')
	{
		temp[i] = str1[i];
		i++;
	}
	temp[i] = '\0';
	i = 0;
	while (str2[i] != '\0')
        {
                str1[i] = str2[i];
                i++;
        }
        str1[i] = '\0';
	i = 0;
	while (temp[i] != '\0')
        {
                str2[i] = temp[i];
                i++;
        }
        str2[i] = '\0';
}

void ft_putstr(char *str)
{
	int i;
	
	i = 0;
	while (str[i] !='\0') {
		ft_putchar(str[i]);
		i++;
	}
}

int main (int argc, char **argv) {
	int i;
	int j;

	i = 1;
	j = 0;
	while (j != argc - 1 )
	{
		while (i < argc - 1 - j)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
				ft_swap(argv[i], argv[i + 1]);
				i++;
		}
	i = 1;
	j++;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i++]);
		ft_putstr("\n");
	}
	return (0);
}
