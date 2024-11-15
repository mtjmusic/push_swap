CC = cc
CFLAGS = -Wall -Werror -Wextra
NAME = push_swap
SRCS = main.c operations.c
OBJS = $(SRCS:.c=.o)
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a
HEADERS = push_swap.h

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJS)

%.o: ./%.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@ -g

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR) bonus

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	rm -rf $(OBJS)

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	rm -rf $(NAME)

re: fclean all