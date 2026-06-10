#include <stdio.h>
#include <string.h>

#include "alat.h"
#include "queue.h"
#include "stack.h"
#include "bst.h"
#include "hash.h"
#include "file.h"

int login()
{
    char user[20];
    char pass[20];

    printf("Username : ");
    scanf("%s",user);

    printf("Password : ");
    scanf("%s",pass);

    if(strcmp(user,"admin")==0 &&
       strcmp(pass,"123")==0)
    {
        return 1;
    }

    return 0;
}


int main()
{
    initData(); 

    int pilih;

    if(!login())
    {
        printf("Login gagal!\n");
        return 0;
    }

    

    do{

        printf("\n");
        printf("===== STUDIO MUSIK =====\n");
        printf("1. Tambah Alat\n");
        printf("2. Tampilkan Alat\n");
        printf("3. Update Alat\n");
        printf("4. Hapus Alat\n");
        printf("5. Tambah Antrean\n");
        printf("6. Proses Antrean\n");
        printf("7. Tampilkan Antrean\n");
        printf("8. Tampilkan Riwayat\n");
        printf("9. Simpan File\n");
        printf("10. Load File\n");
        printf("11. Cari Alat Berdasarkan ID\n");
        printf("12. Cari Alat Berdasarkan Nama\n");
        printf("13. Tampilkan BST (Inorder)\n");
        printf("14. Bubble Sort Nama\n");
        printf("15. Selection Sort Stok\n");
        printf("0. Keluar\n");

        printf("Pilihan : ");
        scanf("%d",&pilih);

        switch(pilih)
        {
            case 1:
                tambahAlat();
                break;

            case 2:
                tampilAlat();
                break;

            case 3:
                updateAlat();
                break;

            case 4:
                hapusAlat();
                break;

            case 5:
                enqueue();
                push("Tambah Antrean");
                break;

            case 6:
                dequeue();
                push("Proses Antrean");
                break;

            case 7:
                tampilQueue();
                break;

            case 8:
                tampilRiwayat();
                break;

            case 9:
                simpanFile();
                break;

            case 10:
                loadFile();
                break;

            case 11:
            {
                int id;

                printf("Masukkan ID : ");
                scanf("%d",&id);

                if(searchHash(id))
                {
                    printf("ID ditemukan.\n");
                }
                else
                {
                    printf("ID tidak ditemukan.\n");
                }

                break;
            }

            case 12:
            {
                char nama[50];

                printf("Nama Alat : ");
                scanf(" %[^\n]",nama);

                BSTNode *hasil =
                searchBST(root,nama);

                if(hasil)
                {
                    printf("Data ditemukan\n");
                    printf("ID   : %d\n",
                           hasil->id);
                    printf("Nama : %s\n",
                           hasil->nama);
                }
                else
                {
                    printf("Data tidak ditemukan\n");
                }

                break;
            }

            case 13:
                inorder(root);
                break;

            case 14:
                bubbleSortNama();
                break;

            case 15:
                selectionSortStok();
                break;

            case 0:
                printf("Terima kasih.\n");
                break;

            default:
                printf("Menu tidak tersedia.\n");
        }

    }while(pilih != 0);

    return 0;
}