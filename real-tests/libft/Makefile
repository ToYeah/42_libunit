NAME=libft.a
SRCS=\
ft_bzero.c\
ft_strlen.c\
ft_strdup.c\
ft_strchr.c\
ft_strnstr.c\
ft_strncmp.c\
ft_memcpy.c\
ft_memset.c\
ft_atoi.c\
ft_isdigit.c\
ft_isalpha.c\
ft_isalnum.c\
ft_tolower.c\
ft_toupper.c

CC=gcc
CCFLAGS=-Wall -Wextra -Werror
AR=ar
ARFLAGS=crs
OBJS=$(SRCS:.c=.o)

all: $(NAME)

.c.o:
	$(CC) $(CCFLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONEY	: all clean fclean re
