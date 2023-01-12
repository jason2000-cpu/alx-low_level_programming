#include "1-djb2.c"
/**
* 
*
*/


unsigned long int key_index(const unsigned char* key, unsigned long int size) {
    /**
    * key_index -  compute the index of a key
    * @key: key to generate its index
    * @size: size of index
    *
    * Return: index of key
    */
    unsigned long int index =  hash_djb2(key);
    return index;
}