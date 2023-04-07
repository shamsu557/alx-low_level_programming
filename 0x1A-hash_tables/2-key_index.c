#include "hash_tables.h"
/**
 * key_index - computes the index of a key in a hash table
 * @key: key to look for
 * @size: size of the hash table's array
 *
 * Return: index at which the key/value pair should be stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int hash_value;

    /* Compute the hash value for the key */
    hash_value = hash_djb2(key);

    /* Use the hash value to compute the index */
    return (hash_value % size);
}

