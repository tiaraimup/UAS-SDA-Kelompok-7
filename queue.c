#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

Queue q = {NULL,NULL};

void enqueue()
{
    Peminjaman *baru =
    (Peminjaman*)malloc(sizeof(Peminjaman));

    printf("ID Peminjaman : ");
    scanf("%d",&baru->idPinjam);

    printf("Nama Peminjam : ");
    scanf(" %[^\n]",baru->nama);

    printf("ID Alat : ");
    scanf("%d",&baru->idAlat);

    baru->next = NULL;

    if(q.front == NULL)
    {
        q.front = q.rear = baru;
    }
    else
    {
        q.rear->next = baru;
        q.rear = baru;
    }

    printf("Masuk antrean!\n");
}

void dequeue()
{
    if(q.front == NULL)
    {
        printf("Antrean kosong!\n");
        return;
    }

    Peminjaman *hapus = q.front;

    q.front = q.front->next;

    if(q.front == NULL)
    {
        q.rear = NULL;
    }

    printf("Melayani : %s\n",hapus->nama);

    free(hapus);
}

void tampilQueue()
{
    Peminjaman *temp = q.front;

    while(temp != NULL)
    {
        printf("%d - %s\n",
               temp->idPinjam,
               temp->nama);

        temp = temp->next;
    }
}