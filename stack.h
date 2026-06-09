#ifndef STACK_H
#define STACK_H

typedef struct Riwayat{
    char aktivitas[100];
    struct Riwayat *next;
}Riwayat;

extern Riwayat *top;

void push(char teks[]);
void popRiwayat();
void tampilRiwayat();

#endif