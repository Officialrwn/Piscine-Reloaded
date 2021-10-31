NAME = ft_display_file
SRC = ./src/*.c
HEADER = ./includes
FLAGS = -Wall -Wextra -Werror
O_FILES = ./*.o

all: $(NAME)

$(NAME):
	gcc -o $(NAME) $(FLAGS) -I $(HEADER) $(SRC) 

clean:
	/bin/rm -f $(O_FILES)

fclean: clean
	/bin/rm -f $(NAME)