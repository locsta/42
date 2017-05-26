/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minizan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/26 08:33:50 by minizan           #+#    #+#             */
/*   Updated: 2017/05/26 15:37:10 by minizan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <strings.h>
#include <string.h> //Pour l'utilisation de strcmp
#include <ctype.h> //Pour tester islanum etc...
#include "libft.h"

int		main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("You forgot to type the name on the function you want to test\n");
		return (0);
	}
	if (strcmp(argv[1], "atoi") == 0)
	{
		printf("String d'entree: \"0\"\n");
		printf("Resultat de ma fonction %d\n", ft_atoi("0"));
		printf("Resultat attendu %d\n\n", atoi("0"));
		printf("String d'entree: \"546:5\"\n");
		printf("Resultat de ma fonction %d\n", ft_atoi("546:5"));
		printf("Resultat attendu %d\n\n", atoi("546:5"));
		printf("String d'entree: \"-4886\"\n");
		printf("Resultat de ma fonction %d\n", ft_atoi("-4886"));
		printf("Resultat attendu %d\n\n", atoi("-4886"));
		printf("String d'entree: \"+548\"\n");
		printf("Resultat de ma fonction %d\n", ft_atoi("+548"));
		printf("Resultat attendu %d\n\n", atoi("+548"));
		printf("String d'entree: \"054854\"\n");
		printf("Resultat de ma fonction %d\n", ft_atoi("054854"));
		printf("Resultat attendu %d\n\n", atoi("054854"));
		printf("String d'entree: \"000074\"\n");
		printf("Resultat de ma fonction %d\n", ft_atoi("000074"));
		printf("Resultat attendu %d\n\n", atoi("000074"));
		printf("String d'entree: \"+-54\"\n");
		printf("Resultat de ma fonction %d\n", ft_atoi("+-54"));
		printf("Resultat attendu %d\n\n", atoi("+-54"));
		printf("String d'entree: \"-+48\"\n");
		printf("Resultat de ma fonction %d\n", ft_atoi("-+48"));
		printf("Resultat attendu %d\n\n", atoi("-+48"));
		printf("String d'entree: \"--47\"\n");
		printf("Resultat de ma fonction %d\n", ft_atoi("--47"));
		printf("Resultat attendu %d\n\n", atoi("--47"));
		printf("String d'entree: \"++47\"\n");
		printf("Resultat de ma fonction %d\n", ft_atoi("++47"));
		printf("Resultat attendu %d\n\n", atoi("++47"));
		printf("String d'entree: \"+47+5\"\n");
		printf("Resultat de ma fonction %d\n", ft_atoi("+47+5"));
		printf("Resultat attendu %d\n\n", atoi("+47+5"));
		printf("String d'entree: \"-47-5\"\n");
		printf("Resultat de ma fonction %d\n", ft_atoi("-47-5"));
		printf("Resultat attendu %d\n\n", atoi("-47-5"));
		printf("String d'entree: \"\e475\"\n");
		printf("Resultat de ma fonction %d\n", ft_atoi("\e475"));
		printf("Resultat attendu %d\n\n", atoi("\e475"));
		printf("String d'entree: \"\t\n\r\v\f  469 \n\"\n");
		printf("Resultat de ma fonction %d\n", ft_atoi("\t\n\r\v\f  469 \n"));
		printf("Resultat attendu %d\n\n", atoi("\t\n\r\v\f  469 \n"));
		printf("String d'entree: \"-2147483648\"\n");
		printf("Resultat de ma fonction %d\n", ft_atoi("-2147483648"));
		printf("Resultat attendu %d\n\n", atoi("-2147483648"));
		printf("String d'entree: \"2147483647\"\n");
		printf("Resultat de ma fonction %d\n", ft_atoi("2147483647"));
		printf("Resultat attendu %d\n\n", atoi("2147483647"));
		printf("String d'entree: \"\t\n\r\v\fd469\"\n");
		printf("Resultat de ma fonction %d\n", ft_atoi("\t\n\r\v\fd469 \n"));
		printf("Resultat attendu %d\n\n", atoi("\t\n\r\v\fd469 \n"));
		printf("String d'entree: \"\n\n\n  -46\b9 \n5d6\"\n");
		printf("Resultat de ma fonction %d\n", ft_atoi("\n\n\n  -46\b9 \n5d6"));
		printf("Resultat attendu %d\n", atoi("\n\n\n  -46\b9 \n5d6"));
	}/*
	else if (strcmp(argv[1], "countwords") == 0)
	{
	}
	else if (strcmp(argv[1], "bzero") == 0)
	{
		void	*mem;

		if (argc == 1 || !(mem = malloc(sizeof(*mem) * 5)))
			return (0);
		if (atoi(argv[1]) == 1)
		{
			memset(mem, 'e', 5);
			ft_bzero(mem, 5);
			write(1, mem, 5);
		}
		else if (atoi(argv[1]) == 2)
		{
			memset(mem, 'e', 5);
			ft_bzero(mem, 0);
			write(1, mem, 5);
		}
		return (0);
	}
	else if (strcmp(argv[1], "delone") == 0)
	{
	}*/
	else if (strcmp(argv[1], "isalnum") == 0)
	{
		int		i;

		i = 0;
		while (i <= 127)
		{
			printf("Test of ASCII character number %d : %c\n", i, i);
			printf("	My function return           : %d\n", ft_isalnum(i));
			printf("	The original function return : %d\n\n", isalnum(i));
			i++;
		}
		return (0);
	}
	else if (strcmp(argv[1], "isalpha") == 0)
	{
		int		i;

		i = 0;
		while (i <= 127)
		{
			printf("Test of ASCII character number %d : %c\n", i, i);
			printf("	My function return           : %d\n", ft_isalpha(i));
			printf("	The original function return : %d\n\n", isalpha(i));
			i++;
		}
	
	}
	else if (strcmp(argv[1], "isascii") == 0)
	{
		int		i;

		i = 0;
		while (i <= 127)
		{
			printf("Test of ASCII character number %d : %c\n", i, i);
			printf("	My function return           : %d\n", ft_isascii(i));
			printf("	The original function return : %d\n\n", isascii(i));
			i++;
		}
	}
	else if (strcmp(argv[1], "isdigit") == 0)
	{
		int		i;

		i = 0;
		while (i <= 127)
		{
			printf("Test of ASCII character number %d : %c\n", i, i);
			printf("	My function return           : %d\n", ft_isdigit(i));
			printf("	The original function return : %d\n\n", isdigit(i));
			i++;
		}
	}
	else if (strcmp(argv[1], "islower") == 0)
	{
		int		i;

		i = 0;
		while (i <= 127)
		{
			printf("Test of ASCII character number %d : %c\n", i, i);
			printf("	My function return           : %d\n", ft_islower(i));
			printf("	The original function return : %d\n\n", islower(i));
			i++;
		}
	}
	else if (strcmp(argv[1], "isprint") == 0)
	{
		int		i;

		i = 0;
		while (i <= 127)
		{
			printf("Test of ASCII character number %d : %c\n", i, i);
			printf("	My function return           : %d\n", ft_isprint(i));
			printf("	The original function return : %d\n\n", isprint(i));
			i++;
		}
	}
	else if (strcmp(argv[1], "isupper") == 0)
	{
		int		i;

		i = 0;
		while (i <= 127)
		{
			printf("Test of ASCII character number %d : %c\n", i, i);
			printf("	My function return           : %d\n", ft_isupper(i));
			printf("	The original function return : %d\n\n", isupper(i));
			i++;
		}
	}/*
	else if (strcmp(argv[1], "itoa") == 0)
	{
	}
	else if (strcmp(argv[1], "lstadd") == 0)
	{
	}
	else if (strcmp(argv[1], "lstdel") == 0)
	{
	}
	else if (strcmp(argv[1], "lstdelone") == 0)
	{
	}
	else if (strcmp(argv[1], "lstiter") == 0)
	{
	}
	else if (strcmp(argv[1], "lstmap") == 0)
	{
	}
	else if (strcmp(argv[1], "lstnew") == 0)
	{
	}
	else if (strcmp(argv[1], "memalloc") == 0)
	{
	}
	else if (strcmp(argv[1], "memccpy") == 0)
	{
	}
	else if (strcmp(argv[1], "memchr") == 0)
	{
	}
	else if (strcmp(argv[1], "memcmp") == 0)
	{
	}
	else if (strcmp(argv[1], "memcpy") == 0)
	{
	}
	else if (strcmp(argv[1], "memdel") == 0)
	{
	}
	else if (strcmp(argv[1], "memmove") == 0)
	{
	}
	else if (strcmp(argv[1], "memset") == 0)
	{
	}
	else if (strcmp(argv[1], "putchar") == 0)
	{
	}
	else if (strcmp(argv[1], "putchar_fd") == 0)
	{
	}
	else if (strcmp(argv[1], "putendl") == 0)
	{
	}
	else if (strcmp(argv[1], "putendl_fd") == 0)
	{
	}
	else if (strcmp(argv[1], "putnbr") == 0)
	{
	}
	else if (strcmp(argv[1], "putnbr_fd") == 0)
	{
	}
	else if (strcmp(argv[1], "putstr") == 0)
	{
	}
	else if (strcmp(argv[1], "putstr_fd") == 0)
	{
	}
	else if (strcmp(argv[1], "strcat") == 0)
	{
	}
	else if (strcmp(argv[1], "strchr") == 0)
	{
	}
	else if (strcmp(argv[1], "strclr") == 0)
	{
	}
	else if (strcmp(argv[1], "strcmp") == 0)
	{
	}
	else if (strcmp(argv[1], "strcpy") == 0)
	{
	}
	else if (strcmp(argv[1], "strdel") == 0)
	{
	}
	else if (strcmp(argv[1], "strdup") == 0)
	{
	}
	else if (strcmp(argv[1], "strequ") == 0)
	{
	}
	else if (strcmp(argv[1], "striter") == 0)
	{
	}
	else if (strcmp(argv[1], "striteri") == 0)
	{
	}
	else if (strcmp(argv[1], "stritoa") == 0)
	{
	}
	else if (strcmp(argv[1], "strjoin") == 0)
	{
	}
	else if (strcmp(argv[1], "strlcat") == 0)
	{
	}
	else if (strcmp(argv[1], "strlen") == 0)
	{
	}
	else if (strcmp(argv[1], "strmap") == 0)
	{
	}
	else if (strcmp(argv[1], "strmapi") == 0)
	{
	}
	else if (strcmp(argv[1], "strncat") == 0)
	{
	}
	else if (strcmp(argv[1], "strncmp") == 0)
	{
	}
	else if (strcmp(argv[1], "strncpy") == 0)
	{
	}
	else if (strcmp(argv[1], "strnequ") == 0)
	{
	}
	else if (strcmp(argv[1], "strnew") == 0)
	{
	}
	else if (strcmp(argv[1], "strnstr") == 0)
	{
	}
	else if (strcmp(argv[1], "strrchr") == 0)
	{
	}
	else if (strcmp(argv[1], "strsplit") == 0)
	{
	}
	else if (strcmp(argv[1], "strstr") == 0)
	{
	}
	else if (strcmp(argv[1], "strsub") == 0)
	{
	}
	else if (strcmp(argv[1], "strtrim") == 0)
	{
	}
	else if (strcmp(argv[1], "tolower") == 0)
	{
	}
	else if (strcmp(argv[1], "toupper") == 0)
	{
	}
	else if (strcmp(argv[1], "word_len") == 0)
	{
	}*/
	else
	{
		printf("non existant function");
	}
	return (0);
}
