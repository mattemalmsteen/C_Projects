/*
Code the function get_hashmap_entry(Entry* hashmap, int array_size, char* key_to_search) 
which retrieve and entry in the hashmap from the a provided key
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct Entry{
    char *key;
    int value;
    //struct Entry *next;
} Entry;

Entry* create_hashmap(int array_size){

    return (Entry*) calloc(sizeof(Entry), array_size);//this return a pointer to the first element of an array of struct Entry
}

int simple_hash(char* key, int hashmap_size){
    int sum = 0;
    for (int i = 0; i < strlen(key); i++){
        sum += key[i];
    }
    return sum % hashmap_size;
}

void add_entry_to_hashmap(Entry *hashmap, int array_size, char *key, int value){
    int index = simple_hash(key, array_size);
    hashmap[index].key = key;
    hashmap[index].value = value;
}

void get_hashmap_entry(Entry* hashmap, int array_size, char* key_to_search){
    for (int i = 0; i < array_size; i++){
        if (hashmap[i].key == key_to_search){
            printf("Key %s corresponds to value %d", key_to_search, hashmap[i].value);
            return;
        }
    }
    printf("No match!");
    return;
}

int main(){
    int size = 3;
    Entry *hash = create_hashmap(size);
    add_entry_to_hashmap(hash, size, "Genoa", 15);
    add_entry_to_hashmap(hash, size, "Milan", 78);
    add_entry_to_hashmap(hash, size, "erf", 16);

    printf("key1: %s.   key2: %s.   key3: %s\n", hash[0].key, hash[1].key, hash[2].key);
    printf("val1: %d.   val2: %d.   val3: %d\n", hash[0].value, hash[1].value, hash[2].value);

    get_hashmap_entry(hash, size, "erf");
}