#include "hash_tables.h"
#include <stddef.h>
/**
 * key_index - gets the index of a key in the hash table array
 * @key: the key string
 * @size: size of the array of the hash table
 *
 * Return: index at which the key should be stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int hash_value, index;

    if (key == NULL || size == 0)
        return (0);

    hash_value = hash_djb2(key);
    index = hash_value % size;

    return (index);
}
