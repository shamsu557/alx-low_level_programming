#include "hash_tables.h"
/**
 * hash_table_print - prints the key/value pairs in a hash table
 * @ht: the hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
    unsigned long int i;
    hash_node_t *node;

    if (ht == NULL)
        return;

    printf("{");
    for (i = 0; i < ht->size; i++)
    {
        node = ht->array[i];
        while (node != NULL)
        {
            printf("'%s': '%s'", node->key, node->value);
            if (node->next != NULL)
                printf(", ");
            node = node->next;
        }
    }
    printf("}\n");
}

