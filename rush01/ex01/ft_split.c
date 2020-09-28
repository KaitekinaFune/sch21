#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int     *str_to_arr(int *arr, char *str)
{
    int i;
    int j;
    i = 0;
    j = 0;
    while(str[j] != '\0')
    {
        if (str[j] >= '1' && str[j] <= '4')
        {
            arr[i] = str[j] - 48;
            i++;
        }
        j++;
    }
	if (i != 16)
	{
		arr[0] = 0;
		return (arr);
	}
    return (arr);
}

int     main(void)
{
    int arr[15];
    str_to_arr(arr, "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2");
	if (arr[0] == 0)
		ft_putstr("Error\n");
	else
	{
    for (int i = 0; i < 16; i++)
        printf("%d ", arr[i]);
	}
}
