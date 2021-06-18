/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 23:26:05 by cmariot           #+#    #+#             */
/*   Updated: 2021/06/18 17:35:30 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	t_flags			*flags;
	unsigned int	i;

	flags = malloc(sizeof(t_flags));
	if (flags == NULL)
		return (-1);
	flags = ft_initialize_flags(flags);
	va_start(flags->args, format);
	i = 0;
	while (format[i])
	{
		if (format[i] != '%')
			flags->total_lenght += ft_putchar(format[i]);
		else if (format[i] == '%')
		{
			i = ft_chck_flgs(format, flags, i++);
			ft_chck_type(format, i, flags);
		}
		i++;
	}
	va_end(flags->args);
	free(flags);
	return (flags->total_lenght);
}

int 	main(void)
{
	int		ret;

	ret = ft_printf("Fonction Printf\n");
	ret = ft_printf("Test d'affichage char : %c\n", 'c');
	ret = ft_printf("Test d'affichage str : %s\n", "str");
	ret = ft_printf("Test d'affichage unsigned int : %u\n", 123456789);
	ret = ft_printf("Test d'affichage int d : %d\n", 12345);
	ret = ft_printf("Test d'affichage int i : %i\n", 67890);
	ret = ft_printf("Test d'affichage 1464 en hexa : %x\n", 1464);
	ret = ft_printf("Test d'affichage 1464 en HEXA : %X\n", 1464);
	ret = ft_printf("Test d'affichage %% : %%\n");
	ft_printf("Retour = %i\n", ft_printf("\nTest valeur de retour\n"));
	ft_printf("Retour = %i\n", ft_printf("Test valeur de retour %d\n", 25));
	ft_printf("Retour = %i\n", ft_printf("Test valeur de retour %s\n", "25"));
	printf("Test du flag '-'\n");
	printf("Test du flag '-' sur .%-c.\n", 'c');
	printf("Test du flag '-' sur .%-2c.\n", 'c');
	printf("Test du flag '-' sur .%-c.\n", 'c');
	return (0);
}
