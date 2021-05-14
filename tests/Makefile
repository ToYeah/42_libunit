NAME		= libfttest
SRCS		= main.c \
				true_test/00_launcher.c true_test/01_ok_test.c true_test/02_ko_test.c\
				true_test/03_segv_test.c true_test/04_bus_test.c\
				strlen/00_launcher.c strlen/01_basic_test.c strlen/02_space_test.c\
				strlen/03_unicode_test.c strlen/04_empty_test.c strlen/05_zero_test.c\
				strdup/00_launcher.c strdup/01_basic_test.c strdup/02_empty_test.c\
				strchr/00_launcher.c strchr/01_basic_test.c strchr/02_nothing_test.c\
				strrchr/00_launcher.c strrchr/01_basic_test.c strrchr/02_nothing_test.c\
				strncmp/00_launcher.c strncmp/01_basic_test.c strncmp/02_same_str_test.c\
				strnstr/00_launcher.c strnstr/01_basic_test.c strnstr/02_nothing_test.c\
				memset/00_launcher.c memset/01_basic_test.c memset/02_zero_test.c\
				memcpy/00_launcher.c memcpy/01_basic_test.c memcpy/02_src_empty_test.c\
				memmove/00_launcher.c memmove/01_basic_test.c memmove/02_src_empty_test.c\
				atoi/00_launcher.c atoi/01_basic_test.c atoi/02_basic2_test.c \
				atoi/03_zero_test.c atoi/04_neg_test.c \
				atoi/05_neg2_test.c atoi/06_intmax_test.c atoi/07_intmin_test.c \
				atoi/08_blank_test.c atoi/09_blank2_test.c atoi/10_escape_test.c \
				atoi/11_escape2_test.c atoi/12_text_test.c atoi/13_text2_test.c \
				atoi/14_longmax_test.c atoi/15_longmin_test.c \
				isdigit/00_launcher.c isdigit/01_basic_test.c isdigit/02_null_test.c isdigit/03_alpha_test.c \
				isalpha/00_launcher.c isalpha/01_basic_test.c isalpha/02_null_test.c isalpha/03_digit_test.c\
				isalnum/00_launcher.c isalnum/01_basic_test.c isalnum/02_basic_2_test.c isalnum/03_null_test.c\
				tolower/00_launcher.c tolower/01_basic_test.c tolower/02_lower_test.c\
				toupper/00_launcher.c toupper/01_basic_test.c toupper/02_upper_test.c
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
OBJS		= $(SRCS:.c=.o)

TARGET_DIR	= ./libft
TARGET_NAME	= libft.a
TARGET		= $(TARGET_DIR)/$(TARGET_NAME)

LIBUNIT_DIR	= ../framework
LIBUNIT		= $(LIBUNIT_DIR)/libunit.a

LIBS		= -lunit -L $(LIBUNIT_DIR)

TESTINCLUDE	= -I true_test -I atoi\
				-I strlen -I strdup -I strchr -I strrchr -I strncmp -I strnstr\
				-I memset -I memcpy -I memmove\
				-I isdigit -I isalpha -I isalnum\
				-I tolower -I toupper

INCLUDES=$(TESTINCLUDE) $(TESTINCLUDE_A) -I $(LIBUNIT_DIR)/includes -I $(TARGET_DIR)

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

test: all
	$(NAME)

.PHONY: all clean fclean re srcs testinclude update

