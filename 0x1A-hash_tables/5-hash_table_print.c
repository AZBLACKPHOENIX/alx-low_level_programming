#include "hash_tables.h"
#include <stdio.h>
#include <stddef.h>
/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
    unsigned long int i;
    hash_node_t *temp;
    int first = 1;

    if (ht == NULL)
        return;

    printf("{");

    for (i = 0; i < ht->size; i++)
    {
        temp = ht->array[i];
        while (temp)
        {
            if (!first)
                printf(", ");
            printf("'%s': '%s'", temp->key, temp->value);
            temp = temp->next;
            first = 0;
        }
    }

    printf("}\n");
}

