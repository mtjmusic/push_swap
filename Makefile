CC = cc
CFLAGS = -Wall -Werror -Wextra
NAME = push_swap
SRCS = main.c operations.c
OBJS = $(SRCS:.c=.o)
PRINTF_DIR = ft_printf
PRINTF = $(PRINTF_DIR)/libftprintf.a

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(PRINTF) $(OBJS)
	cp $(PRINTF) $(NAME)
	ar rcs $(NAME) $(OBJS)

%.o: ./%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(PRINTF):
	$(MAKE) -C $(PRINTF_DIR)

clean:
	$(MAKE) -C $(PRINTF_DIR) clean
	rm -rf $(OBJS)

fclean: clean
	$(MAKE) -C $(PRINTF_DIR) fclean
	rm -rf $(NAME)

re: fclean all