#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct hash_node_s - The node of a hash table
 *
 * @key: The key, string
 *
 * @value: Value corresponding to a key
 * @next: Pointers to the next node of the List
 * The key is unique in the HashTable
 */

typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - A Hash table data structure
 *
 * @size: Size of the array
 * @array: Array of size @size
 *
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);

/**
 * struct shash_node_s - The node of a sorted hash table
 *
 * @key: The key, string
 *
 * The key is unique in the HashTable
 * @value: Value corresponding to a key
 * @next: Pointers to the next node of the List
 * @sprev: Pointers to the previous element of the sorted linked list
 * @snext: Pointers to the next element of the sorted linked list
 */
typedef struct shash_node_s
{
	char *key;
	char *value;
	struct shash_node_s *next;
	struct shash_node_s *sprev;
	struct shash_node_s *snext;
} shash_node_t;

/**
 * struct shash_table_s - It sorted hash table data structure
 *
 * @size: Size of the array
 * @array: Array of size @size
 *
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 *
 * @shead: Pointers to the first element of the sorted linked list
 * @stail: Pointers to the last element of the sorted linked list
 */
typedef struct shash_table_s
{
	unsigned long int size;
	shash_node_t **array;
	shash_node_t *shead;
	shash_node_t *stail;
} shash_table_t;

unsigned long int key_index(const unsigned char *key, unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
shash_table_t *shash_table_create(unsigned long int size);

#endif /* HASH_TABLES_H */
