/*
** EPITECH PROJECT, 2019
** CPool_Day13_2019
** File description:
** btree_create_node
*/

#include "./include/btree.h"
#include <stdlib.h>

btree_t *btree_create_node(void *item)
{
    btree_t *tree;
    tree = NULL;
    tree = malloc(sizeof(btree_t));
    if (tree){
        tree->left = 0;
        tree->right = 0;
        tree->item = item;
    }
    return (tree);
}