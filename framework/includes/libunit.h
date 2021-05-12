#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/wait.h>
# include <signal.h>

typedef struct s_unit_test	t_unit_test;

typedef int					(*t_test_func)(void);

typedef enum e_test_res
{
	RESOK,
	RESKO,
	RESSEGV,
	RESBUS,
	RESUNKNOWN
}	t_test_res;

typedef struct s_unit_test
{
	t_unit_test	*next;
	t_unit_test	*prev;
	t_test_func	func;
	char		*description;
	t_test_res	res;
}				t_unit_test;

char		*my_strdup(const char *str);
size_t		my_strlen(const char *str);

t_unit_test	*test_init(const char *description, t_test_func f);
void		delete_test(t_unit_test **test);
void		delete_test_list(t_unit_test **list);
void		test_add_front(t_unit_test **list_p, t_unit_test *new);
void		error_exit(void);
void		load_test(t_unit_test **list, const char *des, t_test_func f);
int			launch_tests(t_unit_test **test);
t_unit_test	*exec_test_list(t_unit_test *list, int *res);
t_unit_test	*print_test_list(t_unit_test *list);
#endif