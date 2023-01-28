/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaras <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 16:53:33 by dmaras            #+#    #+#             */
/*   Updated: 2023/01/28 16:58:16 by dmaras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//dall;input ricevo numero filosofi, il tempo per morire, tempo per mangiare, 
//tempo per dormire, numero di volte che un filosofo deve mangiare


//funzione che legge l'arg 

int	ft_atoi(char *nptr)
{
	int	negative;
	int	number;
	int	i;

	i = 0;
	number = 0;
	negative = 1;
	while (nptr[i] && (nptr[i] == ' ' || nptr[i] == '\n'
			|| nptr[i] == '\t' || nptr[i] == '\v'
			|| nptr[i] == '\f' || nptr[i] == '\r'))
		i++;
	if (nptr[i] == '-')
		negative = -1;
	if (nptr[i] == '-' || nptr[i] == '+')
		i++;
	while (nptr[i] != '\0' && nptr[i] >= '0' && nptr[i] <= '9')
	{
		number = number * 10 + (nptr[i] - 48);
		i++;
	}
	return (number * negative);
}

int	checker_arg(int i, char **argv)
{
	int	j;

	j = -1;
	while (argv[i][++j])
		if (argv[i][j] < 48 && argv[i][j] > 57)
			return (-1);
	return (ft_atoi(argv[i]));
}



int	main(int argc, char *argv[])
{

