gcc -c ft_putchar.c
gcc -c ft_putstr.c
gcc -c ft_strlen.c
gcc -c ft_strcmp.c
ar rc libft.a ft_putchar.o ft_putstr.o ft_strlen.o ft_strcmp.o
rm ft_putchar.o
rm ft_putstr.o
rm ft_strlen.o
rm ft_strcmp.o
