#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - creates a new hash table
 * prepared:shamsu sabo
 * @size: size of the array
 * Return: pointer to the newly created hash table, or NULL if failed
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *ht;

    if (size == 0)
        return (NULL);

    /* Allocate memory for the hash table struct */
    ht = malloc(sizeof(hash_table_t));
    if (ht == NULL)
        return (NULL);

    /* Allocate memory for the array of pointers to the nodes */
    ht->array = calloc(size, sizeof(hash_node_t *));
    if (ht->array == NULL)
    {
        free(ht);
        return (NULL);
    }

    /* Set the size and number of elements */
    ht->size = size;
    ht->nb_elements = 0;

    return (ht);
}

