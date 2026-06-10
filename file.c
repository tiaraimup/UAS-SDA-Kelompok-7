#include <stdio.h>
#include "alat.h"

void simpanFile()
{
    FILE *fp =
    fopen("data.txt","w");

    Alat *temp = head;

    while(temp != NULL)
    {
        fprintf(fp,
        "%d;%s;%s;%d;%.2f\n",
        temp->id,
        temp->nama,
        temp->kategori,
        temp->stok,
        temp->harga);

        temp = temp->next;
    }

    fclose(fp);

    printf("Data tersimpan!\n");
}

void loadFile()
{
    FILE *fp =
    fopen("data.txt","r");

    if(fp == NULL)
    {
        printf("File tidak ditemukan!\n");
        return;
    }

    printf("Data berhasil dibaca.\n");

    fclose(fp);
}