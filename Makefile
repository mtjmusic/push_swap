CC = cc
CFLAGS = -Wall -Werror -Wextra
NAME = push_swap
SRCS = main.c operations.c parsing.c init.c utils.c
OBJS = $(SRCS:.c=.o)
FT_PRINTF_DIR = ft_printf
FT_PRINTF = $(FT_PRINTF_DIR)/libftprintf.a
LIBFT_DIR = $(FT_PRINTF_DIR)/libft
LIBFT = $(LIBFT_DIR)/libft.a
HEADERS = push_swap.h

.PHONY: all clean fclean re

all: $(NAME) $(LIBFT) $(FT_PRINTF)

$(NAME): $(LIBFT) $(FT_PRINTF) $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIBFT) $(FT_PRINTF)
#	cp $(LIBFT) $(NAME)
#	cp $(FT_PRINTF) $(NAME)
#	ar rcs $(NAME) $(OBJS)

%.o: ./%.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@ -g

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR) bonus

$(FT_PRINTF):
	$(MAKE) -C $(FT_PRINTF_DIR)

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	rm -rf $(OBJS)

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	rm -rf $(NAME)

re: fclean all