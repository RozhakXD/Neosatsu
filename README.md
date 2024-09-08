# Neosatsu - Shortlink Bypasser
![Neosatsu](https://github.com/user-attachments/assets/ad117e99-aa71-4ed7-8d79-9f344d019ac2)

**Neosatsu** adalah sebuah tool berbasis C++ yang digunakan untuk melakukan bypass pada shortlink Neosatsu. Dengan menggunakan algoritma decoding base64, Neosatsu akan mengekstrak dan membersihkan URL yang dienkripsi, lalu menghasilkan URL Google Drive yang valid.

## Fitur
- **Pembersihan String**: Menghilangkan karakter yang tidak valid dari hasil decoding untuk memastikan URL yang dihasilkan benar.
- **Bypass Shortlink Google Drive**: Mengubah shortlink Neosatsu menjadi URL Google Drive yang dapat diakses dengan mudah.
- **Tampilan Hasil yang Optimal**: Menampilkan URL hasil decode dengan berbagai pilihan jika ada beberapa kemungkinan URL yang bisa dihasilkan.
- **Decoding Base64 Otomatis**: Menggunakan algoritma base64 untuk mendekode string terenkripsi secara otomatis.

## Keterangan
Saat ini, program kami hanya mendukung bypass link `Google Drive`. Layanan seperti:

- **AceFile**
- **Mediafire**
- **Zippy**
- **Mega**

**belum didukung**, namun akan ditambahkan di pembaruan mendatang.

## Instalasi
1. Clone repository ini:
    ```bash
    git clone https://github.com/RozhakXD/Neosatsu.git
    cd Neosatsu
    ```
2. Compile kode sumber menggunakan g++ (atau compiler C++ favorit Anda):
    ```bash
    g++ -o Run Run.cpp
    ```
3. Jalankan program:
    ```bash
    ./Run
    ```

## Contoh I/O
**Masukan:**
```bash
https://linkuzu.blogspot.com/?url=wzHczowzHvL2RyaXZlLmdvb2dsZS5jb20vdWM/aWQ9MVBEZURxYmdNX2JGTDhrUklINDE5dG1xNHZxb1BtQ3N1oLf
```
**Output:**
```bash
[*] Decode URL : https://drive.google.com/open?id=1PDeDqbgM_bFL8kRIH419tmq4vqoPmCsu
```

## Struktur Kode
- **main**: Fungsi utama yang mengelola alur program, termasuk menerima input URL shortlink, melakukan proses decoding, membersihkan string, dan menampilkan hasil URL Google Drive yang valid kepada pengguna.
- **base64_decode**: Fungsi ini bertanggung jawab untuk mendekode string terenkripsi yang dikodekan menggunakan base64.
- **clean_string**: Fungsi ini membersihkan string hasil decode dengan menghapus karakter yang tidak valid, sehingga URL yang dihasilkan valid dan aman.

## Masalah Umum
- **Format URL Tidak Valid**: Jika URL yang dimasukkan tidak mengikuti format yang diharapkan, program mungkin gagal untuk melakukan decoding dengan benar.
- **Dukungan Terbatas**: Saat ini, Neosatsu hanya mendukung beberapa layanan untuk bypass shortlink. Layanan lain belum tersedia dan akan diperbarui di masa mendatang.
- **Masalah Padding Base64**: Jika string base64 tidak memiliki padding yang benar, decoding mungkin akan gagal. Namun, program sudah berusaha menangani ini dengan menambahkan padding otomatis.

## Dukungan
Jika Anda merasa bahwa proyek ini bermanfaat, Anda bisa mendukung saya di platform berikut:

- [Trakteer](https://trakteer.id/rozhak_official/tip)
- [PayPal](https://paypal.me/rozhak9)

## Tangkapan Layar
![FunPic_20240907](https://github.com/user-attachments/assets/1cfe0727-0374-4537-a8a3-b6610acd0194)

## Kontribusi
Jika Anda ingin berkontribusi pada proyek ini, jangan ragu untuk membuat pull request atau membuka issue baru. Semua kontribusi sangat dihargai!

## Lisensi
Proyek ini dilisensikan di bawah [MIT License](https://github.com/RozhakXD/Neosatsu?tab=MIT-1-ov-file).
