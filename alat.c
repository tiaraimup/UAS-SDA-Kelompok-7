#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "alat.h"
#include "bst.h"
#include "hash.h"

Alat *head = NULL;

void swapData(Alat *a, Alat *b)
{
    int tempId = a->id;
    a->id = b->id;
    b->id = tempId;

    char tempNama[50];
    strcpy(tempNama, a->nama);
    strcpy(a->nama, b->nama);
    strcpy(b->nama, tempNama);

    char tempKategori[50];
    strcpy(tempKategori, a->kategori);
    strcpy(a->kategori, b->kategori);
    strcpy(b->kategori, tempKategori);

    int tempStok = a->stok;
    a->stok = b->stok;
    b->stok = tempStok;

    float tempHarga = a->harga;
    a->harga = b->harga;
    b->harga = tempHarga;
}
