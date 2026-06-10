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

void initData()
{
    Alat *a1 = (Alat*)malloc(sizeof(Alat));
    Alat *a2 = (Alat*)malloc(sizeof(Alat));
    Alat *a3 = (Alat*)malloc(sizeof(Alat));
    Alat *a4 = (Alat*)malloc(sizeof(Alat));
    Alat *a5 = (Alat*)malloc(sizeof(Alat));

    a1->id = 1;
    strcpy(a1->nama, "Gitar");
    strcpy(a1->kategori, "String");
    a1->stok = 5;
    a1->harga = 25000;

    a2->id = 2;
    strcpy(a2->nama, "Drum");
    strcpy(a2->kategori, "Percussion");
    a2->stok = 2;
    a2->harga = 50000;

    a3->id = 3;
    strcpy(a3->nama, "Piano");
    strcpy(a3->kategori, "Keyboard");
    a3->stok = 1;
    a3->harga = 100000;

    a4->id = 4;
    strcpy(a4->nama, "Biola");
    strcpy(a4->kategori, "String");
    a4->stok = 3;
    a4->harga = 30000;

    a5->id = 5;
    strcpy(a5->nama, "Saxophone");
    strcpy(a5->kategori, "Tiup");
    a5->stok = 4;
    a5->harga = 45000;

    a1->next = a2;
    a2->next = a3;
    a3->next = a4;
    a4->next = a5;
    a5->next = NULL;

    head = a1;

    root = insertBST(root, 1, "Gitar");
    root = insertBST(root, 2, "Drum");
    root = insertBST(root, 3, "Piano");
    root = insertBST(root, 4, "Biola");
    root = insertBST(root, 5, "Saxophone");

    insertHash(1);
    insertHash(2);
    insertHash(3);
    insertHash(4);
    insertHash(5);
}

void tampilAlat()
{
    Alat *temp = head;

    if(temp == NULL)
    {
        printf("Data kosong!\n");
        return;
    }

    printf("\n");
    printf("====================================================================\n");
    printf("| ID | Nama Alat       | Kategori      | Stok | Harga Sewa/Jam     |\n");
    printf("====================================================================\n");

    while(temp != NULL)
    {
        printf("| %-2d | %-15s | %-13s | %-4d | %-18.2f |\n",
               temp->id,
               temp->nama,
               temp->kategori,
               temp->stok,
               temp->harga);

        temp = temp->next;
    }

    printf("====================================================================\n");
}

Alat* cariAlatID(int id)
{
    Alat *temp = head;

    while(temp != NULL)
    {
        if(temp->id == id)
        {
            return temp;
        }

        temp = temp->next;
    }

    return NULL;
}

void tambahAlat()
{
    Alat *baru =(Alat*)malloc(sizeof(Alat));

    printf("ID Alat : ");
    scanf("%d",&baru->id);

    printf("Nama Alat : ");
    scanf(" %[^\n]",baru->nama);

    printf("Kategori : ");
    scanf(" %[^\n]",baru->kategori);

    printf("Stok : ");
    scanf("%d",&baru->stok);

    printf("Harga Sewa/Jam : ");
    scanf("%f",&baru->harga);

    baru->next = NULL;

    if(head == NULL)
    {
        head = baru;
    }
    else
    {
        Alat *temp = head;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = baru;
    }

    root = insertBST(root, baru->id, baru->nama);
    insertHash(baru->id);

    printf("\nData berhasil ditambahkan!\n");
}

void updateAlat()
{
    int id;

    printf("Masukkan ID : ");
    scanf("%d",&id);

    Alat *data = cariAlatID(id);

    if(data == NULL)
    {
        printf("Data tidak ditemukan!\n");
        return;
    }

    printf("Nama Baru : ");
    scanf(" %[^\n]",data->nama);

    printf("Kategori Baru : ");
    scanf(" %[^\n]",data->kategori);

    printf("Stok Baru : ");
    scanf("%d",&data->stok);

    printf("Harga Baru : ");
    scanf("%f",&data->harga);

    printf("Data berhasil diperbarui!\n");
}

void hapusAlat()
{
    int id;

    printf("Masukkan ID : ");
    scanf("%d",&id);

    Alat *temp = head;
    Alat *prev = NULL;

    while(temp != NULL && temp->id != id)
    {
        prev = temp;
        temp = temp->next;
    }

    if(temp == NULL)
    {
        printf("Data tidak ditemukan!\n");
        return;
    }

    if(prev == NULL)
    {
        head = temp->next;
    }
    else
    {
        prev->next = temp->next;
    }

    free(temp);

    printf("Data berhasil dihapus!\n");
}

void bubbleSortNama()
{
    if(head == NULL)
    {
        return;
    }

    int swapped;

    Alat *ptr1;
    Alat *lptr = NULL;

    do{
        swapped = 0;

        ptr1 = head;

        while(ptr1->next != lptr)
        {
            if(strcmp(ptr1->nama,
                      ptr1->next->nama) > 0)
            {
                Alat temp = *ptr1;

                ptr1->id = ptr1->next->id;
                strcpy(ptr1->nama,ptr1->next->nama);
                strcpy(ptr1->kategori,ptr1->next->kategori);
                ptr1->stok = ptr1->next->stok;
                ptr1->harga = ptr1->next->harga;

                ptr1->next->id = temp.id;
                strcpy(ptr1->next->nama,temp.nama);
                strcpy(ptr1->next->kategori,temp.kategori);
                ptr1->next->stok = temp.stok;
                ptr1->next->harga = temp.harga;

                swapped = 1;
            }

            ptr1 = ptr1->next;
        }

        lptr = ptr1;

    }while(swapped);

    printf("Data berhasil diurutkan berdasarkan nama.\n");
}

void selectionSortStok()
{
    Alat *i,*j,*min;

    for(i=head;i!=NULL;i=i->next)
    {
        min = i;

        for(j=i->next;j!=NULL;j=j->next)
        {
            if(j->stok < min->stok)
            {
                min = j;
            }
        }

        int temp = i->stok;
        i->stok = min->stok;
        min->stok = temp;
    }

    printf("Data berhasil diurutkan berdasarkan stok.\n");
}