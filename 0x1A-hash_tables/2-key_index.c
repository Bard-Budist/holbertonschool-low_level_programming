#include "hash_tables.h"
/**
 * key_index - Key index
 * @key: Str key
 * @size: size
 * return: index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
        return (hash_djb2((unsigned char *)key) % size);
}
