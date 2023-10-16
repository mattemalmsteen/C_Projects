#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Entry{

    char* key;// pointer !!!name of the value string in C are represented with char pointer ! 
    int   value;
} Entry;

//The Hashmap is just an array of struct, then I can initialize in this way:
Entry* create_hashmap(int array_size){

    return (Entry*) calloc(sizeof(Entry), array_size);//this return a pointer to the first element of an array of struct Entry

}

