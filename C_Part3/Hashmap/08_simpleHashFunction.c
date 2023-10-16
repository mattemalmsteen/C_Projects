/*
Create a function simple_hash(char* key, int hasmap_size) which computes the hash of a key.
To compute the hash of key, we will simple summing the characters of string and get the modulo of it by the array size
*/
#include <string.h>
int simple_hash(char* key, int hashmap_size){
    int sum = 0;
    for (int i = 0; i < strlen(key); i++){
        sum += key[i];
    }
    return sum % hashmap_size; //using modulo: divide sum by hashsize and take the reminder as key index
}