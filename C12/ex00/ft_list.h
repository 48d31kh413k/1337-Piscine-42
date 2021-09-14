#ifndef __FT_LIST_H__
# define __FT_LIST_H__

typedef struct s_list
{
	struct s_list *next;
	void *data;
} t_list;

#endif
