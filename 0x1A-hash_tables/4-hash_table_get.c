#include "hash_tables.h"

/**
 * hash_table_get -  a function that retrieves a value associated with a key
 * @ht:  hash table you want to look into
 * 2key: the key you are looking for
 * Return: NULL or the value associated with the element
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{

