# Neosatsu - Shortlink Bypasser
![Neosatsu](https://github.com/user-attachments/assets/ad117e99-aa71-4ed7-8d79-9f344d019ac2)

**Neosatsu** adalah sebuah tool berbasis C++ yang digunakan untuk melakukan bypass pada shortlink Neosatsu. Dengan menggunakan algoritma decoding base64, Neosatsu akan mengekstrak dan membersihkan URL yang dienkripsi, lalu menghasilkan URL Google Drive yang valid.

## Fitur
- **Bypass Shortlink**: Mengubah shortlink Neosatsu menjadi URL Google Drive yang dapat diakses.
- **Algoritma Base64 Decoding**: Memanfaatkan decoding base64 untuk mengekstrak string terenkripsi.
- **Pembersihan String Otomatis**: Menghapus karakter tidak valid dari string untuk menghasilkan URL yang valid.
- **Support Multiple URLs**: Menampilkan beberapa URL hasil decode jika tersedia.

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
- **base64_decode**: Fungsi ini mendekode string yang dienkripsi menggunakan base64.
- **clean_string**: Fungsi ini menghapus karakter yang tidak valid dari string yang didekode.
- **main**: Program utama yang menerima input URL shortlink, melakukan decoding, membersihkan string, dan menampilkan URL Google Drive.

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
