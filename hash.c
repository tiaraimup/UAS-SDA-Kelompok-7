#include <stdio.h>
#include <stdlib.h>
#include "hash.h"

HashNode *hashTable[SIZE] = {NULL};

int hashFunction(int id)
{
    return id % SIZE;
}

void insertHash(int id)
{
    int index = hashFunction(id);

    HashNode *baru =
    (HashNode*)malloc(sizeof(HashNode));

    baru->id = id;

    baru->next =
    hashTable[index];

    hashTable[index] = baru;
}

int searchHash(int id)
{
    int index = hashFunction(id);

    HashNode *temp =
    hashTable[index];

    while(temp != NULL)
    {
        if(temp->id == id)
        {
            return 1;
        }

        temp = temp->next;
    }

    return 0;
}
