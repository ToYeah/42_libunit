NAME=libunit.a

SRCS= srcs/my_libft.c srcs/framework.c srcs/unit_test_list.c srcs/print_result.c srcs/error.c srcs/exec_test.c 
CC=gcc
CCFLAGS=-Wall -Wextra -Werror
AR=ar
ARFLAGS=crs
OBJS=$(SRCS:.c=.o)
INCLUDE_DIR=includes
INCLUDE=-I $(INCLUDE_DIR)/

all: $(NAME)

.c.o:
	$(CC) $(CCFLAGS) $(INCLUDE) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

srcs: 
	sed -i -e "s|^SRCS=.*|SRCS= `find srcs -name "*.c" | tr '\n' ' '`|g" ./Makefile

.PHONY: all clean fclean re srcs

