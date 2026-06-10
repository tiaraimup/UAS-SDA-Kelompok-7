#ifndef ALAT_H
#define ALAT_H

typedef struct Alat{
    int id;
    char nama[50];
    char kategori[50];
    int stok;
    float harga;

    struct Alat *next;
}Alat;

extern Alat *head;
void tampilAlat();
void tambahAlat();
void updateAlat();
void hapusAlat();
void initData();

Alat* cariAlatID(int id);

void bubbleSortNama();
void selectionSortStok();

#endif