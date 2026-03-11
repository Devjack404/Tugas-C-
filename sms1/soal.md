1️⃣ Input jumlah barang
2️⃣ Loop mulai dari i = 1
3️⃣ Input data per barang
4️⃣ Hitung total = harga * jumlah
5️⃣ If → diskon
6️⃣ If → member/BPJS
7️⃣ Hitung total akhir
8️⃣ Tambah ke total_semua
9️⃣ Setelah loop → bonus
🔟 Output hasil



Input awal

Program meminta pembeli memasukkan jumlah jenis makanan/minuman yang ingin dibeli.

Input per item

Nama menu

Harga satuan

Jumlah beli

Apakah pembeli Mahasiswa Aktif Udinus (Y/T)

Aturan Diskon

Jika jumlah beli > 3, pembeli mendapatkan diskon 5% dari total harga menu tersebut.

Jika tidak, tidak ada diskon.

Potongan Mahasiswa Aktif

Jika pembeli mahasiswa aktif, dapat potongan tambahan 3% dari total setelah diskon.

Jika tidak, tidak ada potongan.

Bonus

Jika total seluruh belanja > Rp150.000, pembeli mendapatkan Air Mineral Gratis.

Jika tidak, pembeli mendapatkan Kartu Diskon 5% untuk kunjungan berikutnya.

Perhitungan harga

Total harga per menu = harga × jumlah beli

Diskon dan potongan dihitung bertahap (diskon dulu, lalu potongan mahasiswa)

Akumulasi total semua item

Tampilan Program
Buat tampilan sederhana seperti nota berikut:

===========================================
            KANTIN KAMPUS CERDAS
===========================================
Nama Menu       : Nasi Goreng
Harga Satuan    : Rp15000
Jumlah Beli     : 4
Diskon          : Rp3000
Potongan Mhs    : Rp900
-------------------------------------------
Total Menu Ini  : Rp11100
===========================================
TOTAL SEMUA     : Rpxxxxxx
BONUS           : Air Mineral Gratis
===========================================
Terima Kasih Telah Berbelanja!

🎯 Syarat Teknis

Gunakan loop while atau for, tidak boleh while(true).

Gunakan percabangan if/else untuk menentukan diskon, potongan, dan bonus.

Gunakan tipe data float untuk harga dan total.

Gunakan variabel total_semua untuk menjumlahkan semua total akhir.

Tampilkan nota per menu dan total akhir di bawahnya.
















📋 Ketentuan Program

Input awal:

Pembeli memasukkan jumlah jenis barang yang dibeli.

Untuk setiap barang, pembeli menginput:

Nama barang

Harga satuan

Jumlah beli

Status pelanggan (Apakah Pelanggan Tetap? [Y/T])

Aturan diskon:

Jika jumlah beli lebih dari 10 unit, pembeli mendapat diskon 10% dari total harga barang tersebut.

Jika jumlah beli lebih dari 20 unit, diskon menjadi 15%.

Potongan pelanggan tetap:

Jika pembeli adalah Pelanggan Tetap (Y), maka setelah diskon mendapat tambahan potongan 5% dari total setelah diskon.

Bonus pembelian:

Jika total seluruh pembelian lebih dari Rp 1.500.000, pembeli mendapat bonus Payung Cantik.

Jika lebih dari Rp 3.000.000, bonus berubah menjadi Payung & Cangkir Eksklusif.

Jika kurang dari Rp 1.500.000, pembeli hanya mendapat Gantungan Kunci.

Tampilan Output (Nota Pembelian):



=============================================
         TOKO SERBAGUNA PAPUA MAKMUR
=============================================
Nama Barang    : ...
Harga Barang   : ...
Jumlah Beli    : ...
Diskon         : ...
Potongan       : ...
---------------------------------------------
Total Barang Ini : ...
---------------------------------------------
TOTAL SEMUA      : ...
BONUS            : ...
=============================================
        TERIMA KASIH TELAH BERBELANJA
=============================================
