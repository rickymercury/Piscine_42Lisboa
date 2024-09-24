/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 23:36:02 by rickymercur       #+#    #+#             */
/*   Updated: 2024/09/24 23:36:32 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	write_line(int x, char first, char mid, char last)
{
	int	row;
    
    row = 0;
    ft_putchar(first); 
	while (row < x - 2)
	{
		ft_putchar(mid); 
		row++;
	}
	if (x > 1)
		ft_putchar(last); 
	ft_putchar('\n'); 
}

void	rush(int x, int y)
{
	    int	row;
        
        if (x > 0 && y > 0)
        {
		    write_line(x, 'A', 'B', 'C');
		    row = 1;
		    while (row < y - 1)
		    {
			    write_line(x, 'B', ' ', 'B'); 
			    row++;
		    }
		    if (y > 1)
			    write_line(x, 'C', 'B', 'A'); 
        }
        else
			write (1, "Invalid dimensions. PLease, input a positive number", 51);
}