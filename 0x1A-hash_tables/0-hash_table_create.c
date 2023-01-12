#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct hash_item hash_item;

//defining hash table item
struct hash_item {
    char* key;
    char* value;
};

typedef struct hash_table_t hash_table_t;

//defining the Hash Table
struct hash_table_t {
   hash_item** items;
   int size;
   int count;
};



hash_item* create_item(char* key, char* value) {
    hash_item* item = (hash_item*) malloc (sizeof(hash_item));
    item->key = (char*) malloc (strlen(key) + 1);
    item->value = (char*) malloc (strlen(value) + 1);

    strcpy(item->key, key);
    strcpy(item->value, value);
    
    return item;
};


//create Hash Table
hash_table_t* create_table(unsigned long int size) {
    hash_table_t* table = (hash_table_t*) malloc(sizeof(hash_table_t));
    table->size = size;
    table->count = 0;
   
    for (int i = 0; i<table->size; i++){
        table->items[i] = NULL;
    };

    return table;
};
