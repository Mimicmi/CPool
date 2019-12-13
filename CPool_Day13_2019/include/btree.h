/*
** EPITECH PROJECT, 2019
** CPool_Day13_2019
** File description:
** btree
*/

#ifndef BTREE_H_
#define BTREE_H_
typedef struct btree
{
    struct btree *left;
    struct btree *right;
    void *item;
} btree_t;

void btree_apply_infix(btree_t *root, int (*applyf)(void *));
void btree_apply_prefix(btree_t *root, int (*applyf)(void *));
void btree_apply_suffix(btree_t *root, int (*applyf)(void *));
btree_t *btree_create_node(void *item);
#endif