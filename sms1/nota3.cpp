#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama_pembeli;
    string nama_obat;
    string bonus;
    char bpjs;
    int jumlah_item, jumlah_obat, harga, total_harga, total_semua = 0;
    float diskon, potongan_bpjs, total_bayar;
    int i = 1;

    cout << "======================================\n";
    cout << "         TOKO APOTIK ABC\n";
    cout << "======================================\n";
    cout << "Masukkan nama pembeli   : ";
    getline(cin, nama_pembeli);
    cout << "Apakah pembeli BPJS? (y/n): ";
    cin >> bpjs;
    cout << "Masukkan jumlah item obat: ";
    cin >> jumlah_item;
    cout << endl;

    while (i <= jumlah_item) {
        cout << "--------------------------------------\n";
        cout << "Data obat ke-" << i << endl;
        cout << "Nama obat        : ";
        cin >> nama_obat;
        cout << "Harga satuan (Rp): ";
        cin >> harga;
        cout << "Jumlah obat      : ";
        cin >> jumlah_obat;

        total_harga = harga * jumlah_obat;
        diskon = 0;
        potongan_bpjs = 0;

        // Diskon 10% jika jumlah obat > 10
        if (jumlah_obat > 10) {
            diskon = total_harga * 0.10;
        }

        // Potongan 5% jika peserta BPJS
        if (bpjs == 'y' || bpjs == 'Y') {
            potongan_bpjs = (total_harga - diskon) * 0.05;
        }

        total_bayar = total_harga - diskon - potongan_bpjs;
        total_semua += total_bayar;

        cout << "Total harga       : Rp " << total_harga << endl;
        cout << "Diskon (10%)      : Rp " << diskon << endl;
        cout << "Potongan BPJS 5%  : Rp " << potongan_bpjs << endl;
        cout << "Total bayar obat  : Rp " << total_bayar << endl;

        i++;
    }

    // Bonus berdasarkan total semua
    if (total_semua > 1000000) {
        bonus = "PAYUNG";
    } else {
        bonus = "TISSUE";
    }

    cout << "\n======================================\n";
    cout << "             NOTA PEMBELIAN\n";
    cout << "======================================\n";
    cout << "Nama pembeli   : " << nama_pembeli << endl;
    cout << "Total pembelian: Rp " << total_semua << endl;
    cout << "Bonus Anda     : " << bonus << endl;
    cout << "======================================\n";
    cout << "   Terima kasih telah berbelanja!\n";
    cout << "======================================\n";

    return 0;
}
