#include "hash_tables.h"
/**
 * key_index - Give the index of hash table.
 * 
 * @key: Key of the element
 * @size: Size of hash table.
 * Return: Returns the index at which the key/value pair should be stored
 * in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}