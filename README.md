# UAS-SDA-Kelompok-7
# Sistem Penyewaan Alat Musik Studio

Sistem Penyewaan Alat Musik Studio merupakan program berbasis Command Line Interface (CLI) yang dibuat menggunakan bahasa C. Program ini digunakan untuk mengelola data alat musik yang tersedia di studio, mengatur antrean penyewa, menyimpan riwayat aktivitas, serta melakukan pencarian dan pengurutan data alat musik.

Dalam implementasinya, program memanfaatkan beberapa struktur data dan algoritma yang dipelajari pada mata kuliah Struktur Data dan Algoritma, seperti Linked List, Queue, Stack, Binary Search Tree (BST), Hash Table, Bubble Sort, dan Selection Sort.

Program ini dikembangkan sebagai proyek Ujian Akhir Semester (UAS) Praktikum Struktur Data dan Algoritma.


# Struktur Data yang Diimplementasikan

| Struktur Data | Digunakan Untuk |

|---------------|-----------------|

| Linked List | Menyimpan data alat musik |

| Queue | Mengelola antrean penyewa |

| Stack | Menyimpan riwayat aktivitas |

| Binary Search Tree (BST) | Pencarian alat berdasarkan nama |

| Hash Table | Pencarian alat berdasarkan ID |


# Algoritma yang Diimplementasikan

| Algoritma | Digunakan Untuk |

|-----------|----------------|

| Bubble Sort | Mengurutkan data alat berdasarkan nama |

| Selection Sort | Mengurutkan data alat berdasarkan stok |

| BST Search | Mencari alat berdasarkan nama |

| Hash Search | Mencari alat berdasarkan ID |

| Inorder Traversal | Menampilkan data BST secara terurut |


# Struktur Folder

```text

studio-musik/

├── main.c

├── alat.c

├── alat.h

├── queue.c

├── queue.h

├── stack.c

├── stack.h

├── bst.c

├── bst.h

├── hash.c

├── hash.h

├── file.c

├── file.h

├── data.txt

├── README.md

└── makefile

```


# Cara Menjalankan Program

## Prasyarat

- GCC Compiler (MinGW)

- Windows / Linux / macOS

- Terminal atau Command Prompt

## Kompilasi Program

```bash

gcc main.c alat.c queue.c stack.c bst.c hash.c file.c -o studiomusik

```

## Menjalankan Program

### Windows

```bash

studiomusik.exe

```

### Linux/macOS

```bash

./studiomusik

```

# Login Program

Gunakan akun berikut untuk masuk ke sistem:

```text

Username : admin

Password : 123

```


# Data Awal Program

Program menyediakan beberapa data alat musik awal sebagai berikut:

| ID | Nama Alat | Kategori | Stok | Harga Sewa/Jam |

|----|-----------|----------|------|----------------|

| 1 | Gitar | String | 5 | 25000 |

| 2 | Drum | Percussion | 2 | 50000 |

| 3 | Piano | Keyboard | 1 | 100000 |

| 4 | Biola | String | 3 | 30000 |

| 5 | Saxophone | Tiup | 4 | 45000 |


# Tampilan Menu Program

```text

===== STUDIO MUSIK =====

1. Tambah Alat

2. Tampilkan Alat

3. Update Alat

4. Hapus Alat

5. Tambah Antrean

6. Proses Antrean

7. Tampilkan Antrean

8. Tampilkan Riwayat

9. Simpan File

10. Load File

11. Cari Alat Berdasarkan ID

12. Cari Alat Berdasarkan Nama

13. Tampilkan BST (Inorder)

14. Bubble Sort Nama

15. Selection Sort Stok

0. Keluar

Pilihan :

```


# Fitur Program

## Manajemen Data Alat Musik

- Menambah data alat musik

- Menampilkan data alat musik

- Memperbarui data alat musik

- Menghapus data alat musik

## Antrean Penyewa

- Menambah antrean (enqueue)

- Memproses antrean (dequeue)

- Menampilkan antrean penyewa

## Riwayat Aktivitas

- Menyimpan aktivitas menggunakan Stack

- Menampilkan riwayat aktivitas

## Pencarian Data

- Pencarian berdasarkan ID menggunakan Hash Table

- Pencarian berdasarkan nama menggunakan BST

## Pengurutan Data

- Bubble Sort berdasarkan nama alat

- Selection Sort berdasarkan stok alat

## Penyimpanan Data

- Menyimpan data ke file

- Memuat kembali data dari file


# Tim Pengembang

| Nama | Kontribusi |

|------|------------|

| Haikal | Lingkungan Pengembangan dan Struktur Program |

| Tiara | Struktur Data Alat dan Queue |

| Auzan | Stack dan BST |

| Annisa | Hash Table dan Algoritma |

| Tara | Pengujian dan Dokumentasi Output |


# Pengujian

Pengujian dilakukan pada seluruh fitur utama program, meliputi pengelolaan data alat musik, antrean penyewa, pencarian data, pengurutan data, penyimpanan file, dan pemuatan kembali data dari file.

Beberapa skenario pengujian yang dilakukan antara lain:

- Menampilkan data alat musik

- Menambah data alat musik

- Mengubah data alat musik

- Menghapus data alat musik

- Menambah antrean penyewa

- Memproses antrean penyewa

- Pencarian berdasarkan ID

- Pencarian berdasarkan nama

- Pengurutan data menggunakan Bubble Sort

- Pengurutan data menggunakan Selection Sort

- Penyimpanan data ke file

- Memuat data dari file

Seluruh pengujian berhasil dijalankan sesuai dengan fungsi yang dirancang.
