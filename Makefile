NAME = libftprintf.a
SRCS = ft_printf.c ft_printc.c ft_printd.c ft_prints.c ft_printp.c \
			ft_printx.c ft_printu.c

OBJS = $(SRCS:%.c=%.o)

CC = cc

FLAGS = -Wall -Wextra -Werror

HEADER = ft_print.h

all: $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c $(HEADER)
	$(CC) $(FLAGS) -I. -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re

# NAME	= libftprintf.a
# SRCS=    ft_print.c ft_printc.c ft_printd.c ft_prints.c ft_printp.c \
# 			ft_printx.c ft_printu.c

# OBJS	= ${SRCS:%.c=%.o}

# FLAGS	= -Wall -Wextra -Werror

# HEADER	= ft_printf.h

# all: $(NAME) 

# $(NAME): $(OBJS)
# 	gcc $(FLAGS) -c $(SRCS) -I ./
# 	ar rc $(NAME) $(OBJS)

# %.o: %.c $(HEADER)
# 	$(CC) -c $(CFLAGS) $<

# clean:
# 	rm -rf $(OBJS)

# fclean: clean
# 	rm -rf $(NAME)

# re: fclean all