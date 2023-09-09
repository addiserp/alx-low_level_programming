#include "hash_tables.h"

/**
 * shash_table_print - prints key/value pairs in sorted hash table order.
 * @ht: the sorted hash table.
 */
void stable_print(const shash_table_t *ht)
{
	unsigned long int count = 0;
	shash_node_t *node = ht->shead;

	if (ht == NULL)
		return;
	printf("{");
	while (node != NULL)
	{
		if (count > 0)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		count++;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints sorted key/value pairs in reverse.
 * @ht: the sorted hash table.
 */
void stable_print_rev(const shash_table_t *ht)
{
	unsigned long int count = 0;
	shash_node_t *node = ht->stail;

	if (ht == NULL)
		return;
	printf("{");
	while (node != NULL)
	{
		if (count > 0)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		count++;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a sorted hash table
 * @ht: the sorted hash table.
 */
void stable_delete(shash_table_t *ht)
{
	unsigned long int i = 0;
	shash_node_t *node;

	while (i < ht->size)
	{
		while (ht->array[i] != NULL)
		{
			node = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = node;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
