#include "hash_tables.h"

/**
 * hash_table_set -  a function that adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key
 * @value: the value associated with the key.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *cpy_value;
	unsigned long int idx, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	cpy_value = strdup(value);
	if (cpy_value == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	for (i = idx; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = cpy_value;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(cpy_value);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = cpy_value;
	new->next = ht->array[idx];
	ht->array[idx] = new;

	return (1);
}
