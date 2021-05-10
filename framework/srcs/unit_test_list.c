#include "../includes/libunit.h"

t_unit_test	*test_init(const char *description, t_test_func f)
{
	t_unit_test *res;

	res = malloc(sizeof(t_unit_test));
	if (res == NULL)
		error_exit();
	res->func = f;
	res->next = NULL;
	res->prev = NULL;
	res->res = RESUNKNOWN;
	res->description = my_strdup(description);
	if (res->description == NULL)
	{
		free(res);
		return (NULL);
	}
	return (res);
}

void delete_test(t_unit_test **test)
{
	if (*test == NULL)
		return ;
	free((*test)->description);
	(*test)->description = NULL;
	free((*test));
	*test = NULL;
}

void delete_test_list(t_unit_test **list)
{
	t_unit_test *tmp;
	t_unit_test *target;

	if (*list == NULL)
		return ;
	target = *list;
	*list = NULL;
	while (target)
	{
		tmp = target->next;
		delete_test(&target);
		target = tmp;
	}
}

void test_add_front(t_unit_test **list_p, t_unit_test *new)
{
	t_unit_test *list;

	if (new == NULL)
		return ;
	list = *list_p;
	if (list != NULL)
	{
		list->prev = new;
		new->next = list;
	}
	*list_p = new;
}
