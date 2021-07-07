/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 13:29:53 by cmariot           #+#    #+#             */
/*   Updated: 2021/07/07 10:28:10 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int 	main(void)
{
	int		ret;
//	ret = ft_printf("Fonction Printf\n");
//	ret = ft_printf("Test d'affichage char : %c\n", 'c');
//	ret = ft_printf("Test d'affichage str : %s\n", "str");
//	ret = ft_printf("Test d'affichage unsigned int : %u\n", 123456789);
//	ret = ft_printf("Test d'affichage int d : %d\n", 12345);
//	ret = ft_printf("Test d'affichage int i : %i\n", 67890);
//	ret = ft_printf("Test d'affichage 1464 en hexa : %x\n", 1464);
//	ret = ft_printf("Test d'affichage 1464 en HEXA : %X\n", 1464);
//	ret = ft_printf("Test d'affichage de l'adresse d'une variable : %p\n", &ret);
//	ret = ft_printf("Test d'affichage %% : %%\n");
//	ft_printf("Retour = %i\n", ft_printf("\nTest valeur de retour\n"));
//	ft_printf("Retour = %i\n", ft_printf("Test valeur de retour %d\n", 25));
//	ft_printf("Retour = %i\n", ft_printf("Test valeur de retour %s\n", "25"));
//	ft_printf("Test sur les char\n");
//	ft_printf("%c", '0'); //OK
//	ft_printf(" %c ", '0'); //OK 
//	ft_printf("10%c", '0'); // OK
//	ft_printf(".%10c.", '0'); //OK
//	ft_printf("-10%c", '0'); // OK
//	ft_printf("%-10c", '0'); // OK
//	ft_printf("%-10c", '0'); // OK
//	ft_printf("%*c", 1, '0');
//	ft_printf("%*c", 0, '0');
//	ft_printf("%*c", 2, '0');
//	ft_printf("%*c", -2, '0');
//	ft_printf("%*c", 0, '0');
//	ft_printf("%*c", 10, '0');
//	ft_printf("%*c", -10, '0');
//	ft_printf(".%*c.%*c.\n", -10, '0', 10, '1');
//	ft_printf("*%c%*c", '0', 10, '1');
//	ft_printf("%*c%c*", -10, '0', '1');
//	ft_printf("%-10c*",'0');
//	ft_printf("%-10c%*c%c*",'0', 10, '1', '2');
//	ft_printf("%c%c%c*",'0', '1', '2');
//	ft_printf("%-c%-c%c*", 1, '0', 0);
//	ft_printf("%c", '0' - 256);
//	ft_printf("%c", '0' + 256);
//	ft_printf("%c", 0);
//	ft_printf("0%c", 0);
//	ft_printf("%c", -129);
//	ft_printf("%c", 128);
//	ft_printf("%-*c", 10, '1');
//	ft_printf(" -%*c* -%-*c* ", -2, 0, 2, 0);
//	ft_printf(" -%-*c* -%-*c* ", 2, 0, -2, 0);
//	ft_printf(" -%*c* -%-*c* ", -1, 0, 1, 0);
//	ft_printf(" -%-*c* -%-*c* ", 2, 0, -2, 0);
//	ft_printf(" -%-2c* -%2c* ", 0, 0);	
//	ft_printf("Test sur les char *\n");
//	ret = ft_printf(". %*.s %.1s .", 10, "123", "4567");
//	printf("ret1 = %d\n", ret);
//	ft_putchar_fd('\n', 1);
//	ret = printf(". 123 4567 .");
//	printf("ret2 = %d\n", ret);
//	ret = ft_printf("%x\n", 15);
//	printf("%x\n", 15);
//	ft_printf(".%5x.\n", 15);
//	printf(".%5x.\n", 15);
//	ft_printf(".%-5x.\n", 15);
//	printf(".%-5x.\n", 15);
//	ret = ft_printf("%d\n", 0);
//	ret = ft_printf(".%.i.\n", 001);
//	ret = ft_printf(".%.i.\n", 0);
//	printf(".%.i.\n", 0);
//	ret = ft_printf(".%-.2i.\n", 0);
//	printf(".%-.2i.\n", 1);
//	ret = ft_printf(".%*s.\n", 10, "abcd");
//	ret = ft_printf(".%*s.\n", 1, "abcd");
//	ret = ft_printf(".%*.2s.\n", 10, "abcd");
//	ret = ft_printf(".%*.s.%.1s.\n", 10, "123", "4567");
//	ret = ft_printf(".%10.4s.%.4s.\n", "123", "4567");
//	ret = ft_printf(".%-10.6s.\n", "123");
//	ft_printf(".%*.5s.%*.5s.\n", 10, "123", -10, "4567");
//	printf(".%*.5s.%*.5s.\n", 10, "123", -10, "4567");
//	ft_printf(".%*.5s.%*.5s.\n", -10, "123", -10, "4567");
//	printf(".%*.5s.%*.5s.\n", -10, "123", -10, "4567");
//	ret = ft_printf(".%*.5s.%*.5s.\n", -10, "123", 10, "4567");
//	ret = ft_printf(".%10.s.%1.s.\n", "123", "4567");
//	ret = ft_printf(".%3.3s.%3.3s.\n", "123", "4567");
//	ret = ft_printf(".%4.3s.%-4.3s.\n", "123", "4567");
//	ret = printf(".%4.3s.%-4.3s.\n", "123", "4567");
//	ret = ft_printf(" %-3.s ", NULL);
//	ret = ft_printf(" %-3.s ", NULL);
//	ret = ft_printf(".%.*s.\n", -2, "123");
//	ret = ft_printf("Test d'affichage sur les integer\n");
//	ret = ft_printf("%d\n", 0);
//	ret = ft_printf(".%5d.\n", 1);
//	ret = ft_printf("%-5d\n", 0);
//	ret = ft_printf("%5d\n", -10);
//	ret = ft_printf("%5d\n", -12345678);
//	ret = ft_printf("%05d\n", -123456789);
//	ret = ft_printf(".%-3.2i.\n", 0);
//	ret = printf(".%-3.2i.\n", 0);
//	ret = ft_printf(".%.4i.\n", -1);
//	ret = printf(".%.4i.\n", -1);
//	ret = printf(".%-3.2i.\n", 0);
//	ret = ft_printf(".%10.42i.\n", 0);
//	ret = printf(".%10.42i.\n", 0);
//	ret = ft_printf(".%-3.2i.%10.42i.\n", 10, -10);
//	ret = ft_printf(".%-3.2i.%10.42i.\n", 10, -10);
//	ret = printf(".%-3.2i.%10.42i.\n", 10, -10);
//	ret = ft_printf(".%-3.2i.%10.42i.\n", 0, 0);
//	ret = printf(".%-3.2i.%10.42i.\n", 0, 0);
//	ret = ft_printf(".%*.*i.\n", 2, 5, 123);
//	ret = printf(".%*.*i.\n", 2, 5, 123);
//	ret = printf(".*%-*.*i*.*%*.*i*.\n", 4, 5, 10, 10, 21, -10);
//	ret = ft_printf(".%i.\n", 214748364999);
//	ret = ft_printf("*%-*.*d*%*.*d*\n", 6, 2, 102, 10, 21, -101);
//	ret = ft_printf(".%0-*.*i.%0*.*i.\n", 2, 6, 102, 21, 10, -101);
//	ret = ft_printf(".%-*i.%0*i.\n", 21, 1021, 21, -1011);
//	ret = printf(".%-*i.%0*i.\n", 21, 1021, 21, -1011);
//	ret = ft_printf(".%0*.*i.\n", 21, 10, -101);
//	ret = printf(".%0*.*i.\n", 21, 10, -101);
//	ret = ft_printf("--0*%0*.0i*00*%0*.10i*0--\n", -2, 0, 21, 1);
//	ret = printf("--0*%0*.0i*00*%0*.10i*0--\n", -2, 0, 21, 1);
//	ret=	ft_printf("%9.10i\n", UINT_MAX);
//	ret=	printf("%9.10li\n", UINT_MAX);
//	printf("%10.2i\n", UINT_MAX);
//	ft_printf(".%1.i.\n", 0);
//	printf(".%1.i.\n", 0);
//	ft_printf(".%2.i.\n", 0);
//	printf(".%2.i.\n", 0);
//	ft_printf(".%3.i.\n", 0);
//	printf(".%3.i.\n", 0);
//	ret = ft_printf("%i\n", 1);
//	printf("%i\n", 1);
//	ft_printf("%.i\n", 1);
//	printf("%.i\n", 1);
//	ft_printf("%i\n", 0);
//	printf("%i\n", 0);
//	ft_printf("%.i\n", 0);
//	printf("%.2i\n", 02);
//	ft_printf("%.2i\n", 02);
/*	ret = ft_printf(".%2i.\n", 1);
	ret = ft_printf(".%5i.\n", 1);
	ret = ft_printf(".%2.1i.\n", 1);
	ret = ft_printf(".%2.2i.\n", 1);
	ret = ft_printf(".%2.3i.\n", 1);
	ret = printf(".%3i.\n", -1);
	ret = printf(".%5i.\n", -1);
	ret = printf(".%3.1i.\n", -1);
	ret = printf(".%3.6i.\n", -1);
	ret = ft_printf(".%3.3i.\n", -1);*/
//	ret = ft_printf(".%0*.*i.\n", 21, 10, 101);
//	ret = printf(".%0*.*i.\n", 21, 10, 101);
//	ret = ft_printf(".%0*.0i.%0*.10i.\n", -2, 0, 21, 1);
//	ret = printf(".%0*.0i.%0*.10i.\n", -2, 0, 21, 1);
//	ret = ft_printf(".%0-*i.%0*i.\n", 21, 1021, 21, -1011);
//	ret = printf(".%-*i.%0*i.\n", 21, 1021, 21, -1011);
//	ret = ft_printf(".%0*.0i.%0*.10i.\n", -21, INT_MAX, 21, INT_MIN);
//	printf(".%0*.0i.%0*.10li.\n", -21, INT_MAX, 21, INT_MIN);
//	ret = ft_printf(".%-0*.20i.%-0*.10i.\n", -21, CHAR_MAX, 21, CHAR_MIN);
//	ret = printf(".%-*.20i.%-*.10i.\n", -21, CHAR_MAX, 21, CHAR_MIN);
//	ret = ft_printf(".%-0*.4i.%-0*.4i.\n", -21, CHAR_MAX, 21, CHAR_MIN);
//	ret = printf(".%-*.4i.%-*.4i.\n", -21, CHAR_MAX, 21, CHAR_MIN);
//	ret = ft_printf(".%0*.0i.%0*.10i.\n", -2, 0, 21, 1);
//	ret = printf(".%0*.0i.%0*.10i.\n", -2, 0, 21, 1);
//	ret = ft_printf(".%9.2i.\n", UINT_MAX);
//	ret = printf(".%9.2li.\n", UINT_MAX);
//	ret = ft_printf(".%-0*.10i.%-0*.0i.\n", 21, 1021, 21, -1011);
//	ret = printf(".%-*.10i.%-*.0i.\n", 21, 1021, 21, -1011);
//	ret = ft_printf(".%0*.0i.%0*.10i.\n", -2, 0, 21, 1);
//	ret = printf(".%0*.0i.%0*.10i.\n", -2, 0, 21, 1);
//	ret = ft_printf(".%-0*.4i.%-0*.4i.\n", -21, CHAR_MAX, 21, CHAR_MIN);
//	ret = printf(".%-*.4i.%-*.4i.\n", -21, CHAR_MAX, 21, CHAR_MIN);
	
	//OK
	ret = ft_printf("%011.10i", UINT_MAX);
	ret = printf("%011.10li", UINT_MAX);
	//Pas OK
	ft_printf("%9.2i\n", INT_MAX);
	printf("%9.2i\n", INT_MAX);
	ft_printf("%10.2i\n", UINT_MAX);
	printf("%10.2li\n", UINT_MAX);
	ft_printf("%11.2i\n", UINT_MAX);
	printf("%11.2li\n", UINT_MAX);
	ft_printf("%09.0i\n", UINT_MAX);
	printf("%09.0li\n", UINT_MAX);
	ft_printf("%09.2i\n", UINT_MAX);
	printf("%09.2li\n", UINT_MAX);
	ft_printf("%010.0i\n", UINT_MAX);
	printf("%010.0li\n", UINT_MAX);
	ft_printf("%010.2i\n", UINT_MAX);
	printf("%010.2li\n", UINT_MAX);
	return (0);
}
