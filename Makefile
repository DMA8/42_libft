NAME = libft.a
CFLAGS = -Wall -Werror -Wextra -c
FILES = ft_isalnum.c ft_isalpha.c ft_isdigit.c test_f.c
OBJ = $(FILES:%.c=%.o)
all: $(NAME)
$(NAME): $(OBJ)
		ar rcs $(NAME) $(OBJ)
$(OBJ): $(FILES)
		gcc $(CFLAGS) $(FILES)

sclean:
		rm -f $(OBJ)
		rm -f $(FILES)

sfclean: clean
		rm -f $(NAME)

re: fclean all