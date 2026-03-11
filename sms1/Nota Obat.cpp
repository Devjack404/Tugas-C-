#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string nama;
    string bonus;
    string nomor_obat;
    int jumlah_obat = 0;
    int harga_obat = 0;
    int total = 0;
    int total_semua = 0;
    double diskon = 0;

    cout << "=========================" << endl;
    cout << "     Apotek Sehat Selalu" << endl;
    cout << "=========================" << endl;
    cout << endl;
    cout << "Daftar Obat :" << endl;
    cout << "1. Paracetamol : Rp10.000" << endl;
    cout << "2. Amoxilin    : Rp15.000" << endl;
    cout << "3. Vitamin C   : Rp12.000" << endl;
    cout << "=========================" << endl;
    cout << endl;

    cout << "Masukkan Nama Pasien : ";
    cin.ignore();
    getline(cin, nama);

    while (true) {
        cout << "Masukkan nomor obat (jika batal ketik 'exit') : ";
        cin >> nomor_obat;

        if (nomor_obat == "exit") break;

        cout << "Masukkan Jumlah Obat : ";
        cin >> jumlah_obat;

        if (nomor_obat == "1") {
            harga_obat = 10000;
        } else if (nomor_obat == "2") {
            harga_obat = 15000;
        } else if (nomor_obat == "3") {
            harga_obat = 12000;
        } else {
            cout << "Nomor obat tidak valid!\n";
            continue;
        }

        total = harga_obat * jumlah_obat;
        total_semua += total;

        cout << "Total untuk obat ini: Rp" << total << endl;
        cout << "Subtotal sementara: Rp" << total_semua << endl;
        cout << "-------------------------" << endl;
    }

    // Cek diskon dan bonus
    if (total_semua > 100000) { 
        diskon = 0.20; 
        bonus = "Bonus: 1 obat gratis (Paracetamol)";
    } else {
        diskon = 0;
        bonus = "Tidak ada bonus";
    }

    double potongan = total_semua * diskon;
    double total_akhir = total_semua - potongan;

    cout << fixed << setprecision(0);
    cout << "\n=========================" << endl;
    cout << "        NOTA PEMBELIAN" << endl;
    cout << "=========================" << endl;
    cout << "Nama Pasien  : " << nama << endl;
    cout << "Total Harga  : Rp" << total_semua << endl;
    cout << "Diskon       : Rp" << potongan << endl;
    cout << "Bonus        : " << bonus << endl;
    cout << "Total Akhir  : Rp" << total_akhir << endl;
    cout << "=========================" << endl;
    cout << "Terima kasih sudah berbelanja!" << endl;

    return 0;   
}
