#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
	int count;
	int i;
	int *arr;

	i = min;
	count = 0;
	while (i < max)
	{
		i++;
		count++;
	}
	i = 0;
	arr = (int *)malloc(count * sizeof(int));
	if (!arr) {
		return (0);
	}
	
	while (i < count)
	{
                arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
/*
int main () {
	printf("%d", *(ft_range(-2, 10)+4));
    return (0);
}

while (arr_char[i])
{
*/
