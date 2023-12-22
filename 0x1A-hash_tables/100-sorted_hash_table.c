#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
#include <stddef.h>
/**
 * shash_table_create - creates a sorted hash table
 * @size: size of the array
 * Return: a pointer to the created sorted hash table, or NULL on failure
 */
shash_table_t *shash_table_create(unsigned long int size)
{
    shash_table_t *new_table = NULL;
    unsigned long int i;

    if (size == 0)
        return (NULL);

    new_table = malloc(sizeof(shash_table_t));
    if (new_table == NULL)
        return (NULL);

    new_table->array = malloc(sizeof(shash_node_t *) * size);
    if (new_table->array == NULL)
    {
        free(new_table);
        return (NULL);
    }

    new_table->size = size;
    new_table->shead = NULL;
    new_table->stail = NULL;

    for (i = 0; i < size; i++)
        new_table->array[i] = NULL;

    return (new_table);
}

/**
 * shash_table_set - adds an element to the sorted hash table
 * @ht: sorted hash table to add the key/value to
 * @key: the key
 * @value: the value associated with the key
 * Return: 1 on success, 0 on failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    shash_node_t *new_node = NULL, *current = NULL, *prev = NULL;
    unsigned long int index;

    if (ht == NULL || key == NULL || value == NULL)
        return (0);

    index = key_index((const unsigned char *)key, ht->size);

    current = ht->array[index];

    while (current)
    {
        if (strcmp(current->key, key) == 0)
        {
            free(current->value);
            current->value = strdup(value);
            return (1);
        }
        prev = current;
        current = current->next;
    }

    new_node = malloc(sizeof(shash_node_t));
    if (new_node == NULL)
        return (0);

    new_node->key = strdup(key);
    new_node->value = strdup(value);
    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    if (ht->shead == NULL)
    {
        ht->shead = new_node;
        ht->stail = new_node;
    }
    else
    {
        if (strcmp(new_node->key, ht->shead->key) < 0)
        {
            new_node->snext = ht->shead;
            ht->shead->sprev = new_node;
            ht->shead = new_node;
        }
        else
        {
            current = ht->shead;
            while (current && strcmp(new_node->key, current->key) > 0)
            {
                prev = current;
                current = current->snext;
            }
            new_node->sprev = prev;
            new_node->snext = current;
            if (prev)
                prev->snext = new_node;
            if (current)
                current->sprev = new_node;
            if (!current)
                ht->stail = new_node;
        }
    }
    return (1);
}

/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: sorted hash table to look into
 * @key: the key you are looking for
 * Return: the value associated with the element, or NULL if key couldn’t be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
    shash_node_t *current = NULL;
    unsigned long int index;

    if (ht == NULL || key == NULL)
        return (NULL);

    index = key_index((const unsigned char *)key, ht->size);

    current = ht->array[index];

    while (current)
    {
        if (strcmp(current->key, key) == 0)
            return (current->value);
        current = current->next;
    }

    return (NULL);
}

/**
 * shash_table_print - prints a sorted hash table
 * @ht: sorted hash table to print
 */
void shash_table_print(const shash_table_t *ht)
{
    shash_node_t *current = NULL;

    if (ht == NULL)
        return;

    current = ht->shead;
    printf("{");
    while (current)
    {
        printf("'%s': '%s'", current->key, current->value);
        current = current->snext;
        if (current)
            printf(", ");
    }
    printf("}\n");
}

/**
 * shash_table_print_rev - prints a sorted hash table in reverse order
 * @ht: sorted hash table to print
 */
void shash_table_print_rev(const shash_table_t *ht)
{
    shash_node_t *current = NULL;

    if (ht == NULL)
        return;

    current = ht->stail;
    printf("{");
    while (current)
    {
        printf("'%s': '%s'", current->key, current->value);
        current = current->sprev;
        if (current)
            printf(", ");
    }
    printf("}\n");
}

/**
 * shash_table_delete - deletes a sorted hash table
 * @ht: sorted hash table to delete
 */
void shash_table_delete(shash_table_t *ht)
{
    shash_node_t *current = NULL, *next = NULL;

    if (ht == NULL)
        return;

    current = ht->shead;

    while (current)
    {
        next = current->snext;
        free(current->key);
        free(current->value);
        free(current);
        current = next;
    }

    free(ht->array);
    free(ht);
}

