NAME = libft.a
SRC_PATH = ./srcs/
HEADER = ./includes/
FLAGS = -Wall -Wextra -Werror
SRCS = $(SRC_PATH)ft_putchar.c $(SRC_PATH)ft_putstr.c $(SRC_PATH)ft_strcmp.c $(SRC_PATH)ft_strlen.c $(SRC_PATH)ft_swap.c
O_FILES = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o 
RANLIB = ranlib libft.a

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c -I $(HEADER) $(SRCS)
	ar rc $(NAME) $(O_FILES)
	$(RANLIB)

clean:
	/bin/rm -f $(O_FILES)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all