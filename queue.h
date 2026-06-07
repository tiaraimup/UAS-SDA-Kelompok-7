#ifndef QUEUE_H
#define QUEUE_H

typedef struct Peminjaman{
    int idPinjam;
    char nama[50];
    int idAlat;

    struct Peminjaman *next;
}Peminjaman;

typedef struct{
    Peminjaman *front;
    Peminjaman *rear;
}Queue;

extern Queue q;

void enqueue();
void dequeue();
void tampilQueue();

#endif