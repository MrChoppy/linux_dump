/*
** EPITECH PROJECT, 2018
** my_params_to_list.c
** File description:
** comment this function
*/

typedef struct btree
{
	struct btree *left;
	struct btree *right;
	void *item;
} btree_t;