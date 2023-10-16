/*Create a function new_hash_map(int size) which initialize on the heap a hashmap. It shall return an array of the Entry struct*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Entry{
    char *key;
    float value;
    struct Entry *next;
} Entry;

// Define the HashMap struct to hold the array and size
typedef struct {
    Entry* entries;
    int size;
} HashMap;

// Function to create a new hashmap on the heap
HashMap* new_hash_map(int size) {
    // Allocate memory for the HashMap struct
    HashMap* hashmap = (HashMap*)malloc(sizeof(HashMap));
    
    // Check if allocation is successful
    if (hashmap == NULL) {
        fprintf(stderr, "Memory allocation failed for HashMap.\n");
        exit(EXIT_FAILURE);
    }

    // Allocate memory for the array of Entry structs
    hashmap->entries = (Entry*)malloc(size * sizeof(Entry)); //This is the important step in which create the space for the array

    // Check if allocation is successful
    if (hashmap->entries == NULL) {
        fprintf(stderr, "Memory allocation failed for entries array.\n");
        free(hashmap); // Free previously allocated memory
        exit(EXIT_FAILURE);
    }
    // Initialize the size of the hashmap
    hashmap->size = size;

    return hashmap;
}

int main() {
    int hashmap_size = 10;

    // Create a new hashmap on the heap
    HashMap* myHashMap = new_hash_map(hashmap_size);

    // Use myHashMap as needed

    // Don't forget to free the allocated memory when done
    free(myHashMap->entries);
    free(myHashMap);

    return 0;
}