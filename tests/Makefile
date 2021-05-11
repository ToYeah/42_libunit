NAME		= libfttest
SRCS		= main.c strlen/01_basic_test.c strlen/02_null_test.c strlen/00_launcher.c 
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
OBJS		= $(SRCS:.c=.o)

TARGET_DIR	= ../real-tests/libft
TARGET_NAME	= libft.a
TARGET		= $(TARGET_DIR)/$(TARGET_NAME)

LIBUNIT_DIR	= ../framework
LIBUNIT		= $(LIBUNIT_DIR)/libunit.a

LIBS		= -lunit -L $(LIBUNIT_DIR)

TESTINCLUDE	= -I strlen 

INCLUDES=$(TESTINCLUDE) -I $(LIBUNIT_DIR)/includes -I $(TARGET_DIR)

all: $(NAME)

.c.o:
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $(<:.c=.o)

$(NAME)	: $(OBJS) $(LIBUNIT) $(TARGET)
	$(CC) $(CFLAGS) $(TESTINCLUDE) -o $(NAME) $(OBJS) $(LIBS) $(TARGET)

clean: 
	$(MAKE) clean -C $(LIBUNIT_DIR)
	$(MAKE) clean -C $(TARGET_DIR)
	$(RM) $(OBJS)

fclean: clean
	$(MAKE) fclean -C $(LIBUNIT_DIR)
	$(MAKE) fclean -C $(TARGET_DIR)
	$(RM) $(NAME)

re: fclean all

$(LIBUNIT):
	$(MAKE) -C $(LIBUNIT_DIR)

$(TARGET):
	$(MAKE) -C $(TARGET_DIR)

srcs: 
	sed -i -e "s|^SRCS\t\t=.*|SRCS\t\t= `find * -name "*.c" | tr '\n' ' '`|g" ./Makefile

testinclude:
	sed -i -e "s|^TESTINCLUDE\t=.*|TESTINCLUDE\t= `find * -type d | sed "s/^/-I /g" | tr '\n' ' '`|g" ./Makefile

update: srcs testinclude


.PHONY: all clean fclean re srcs testinclude update

