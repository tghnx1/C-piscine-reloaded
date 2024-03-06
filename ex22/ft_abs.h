/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkokorev <mkokorev@student.42berlin.d>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:08:33 by mkokorev          #+#    #+#             */
/*   Updated: 2023/11/10 16:51:19 by mkokorev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ABS macro to calculate the absolute value
#define ABS(arg) (((arg) >= 0) ? arg : -arg)
/*
#include <stdio.h>
int main() {
    int x = -10;

    printf("Original number: %d\n", x);
    printf("Absolute value: %d\n", ABS(x));

    return 0;
}
*/
