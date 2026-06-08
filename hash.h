#ifndef HASH_H
#define HASH_H

#define SIZE 100

typedef struct HashNode{
    int id;

    struct HashNode *next;
}HashNode;

extern HashNode *hashTable[SIZE];

int hashFunction(int id);

void insertHash(int id);

int searchHash(int id);

#endif
