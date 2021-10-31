NAME = ft_display_file
SRC_PATH = ./src/
HEADER = ./includes
FLAGS = -Wall -Wextra -Werror
O_FILES = main.o ft_display_file.o ft_putchar.o ft_putstr.o
SRC = $(SRC_PATH)main.c $(SRC_PATH)ft_display_file.c $(SRC_PATH)ft_putchar.c $(SRC_PATH)ft_putstr.c

all: $(NAME)

$(NAME):
	gcc -o $(NAME) $(FLAGS) -I $(HEADER) $(SRC) 

clean:
	/bin/rm -f $(O_FILES)

fclean: clean
	/bin/rm -f $(NAME)