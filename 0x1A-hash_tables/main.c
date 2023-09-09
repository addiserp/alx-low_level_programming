#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    shash_table_t *ht;

    ht = shash_table_create(1024);
    stable_set(ht, "y", "0");
    stable_print(ht);
    stable_set(ht, "j", "1");
    stable_print(ht);
    stable_set(ht, "c", "2");
    stable_print(ht);
    stable_set(ht, "b", "3");
    stable_print(ht);
    stable_set(ht, "z", "4");
    stable_print(ht);
    stable_set(ht, "n", "5");
    stable_print(ht);
    stable_set(ht, "a", "6");
    stable_print(ht);
    stable_set(ht, "m", "7");
    stable_print(ht);
    stable_print_rev(ht);
    stable_delete(ht);
    return (EXIT_SUCCESS);
}
