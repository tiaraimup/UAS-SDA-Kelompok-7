#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stack.h"

Riwayat *top = NULL;

void push(char teks[])
{
    Riwayat *baru =
    (Riwayat*)malloc(sizeof(Riwayat));

    strcpy(baru->aktivitas,teks);

    baru->next = top;
    top = baru;
}

void popRiwayat()
{
    if(top == NULL)
    {
        printf("Riwayat kosong!\n");
        return;
    }

    Riwayat *hapus = top;

    top = top->next;

    free(hapus);
}

void tampilRiwayat()
{
    Riwayat *temp = top;

    while(temp != NULL)
    {
        printf("%s\n",temp->aktivitas);
        temp = temp->next;
    }
}