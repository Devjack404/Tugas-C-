#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

/*
NIM  : A11_2025_16575
NAMA : PASYAH WAHYU INSANNI VEGANANDA
*/

struct buku {
    string kode;
    string judul;
    string penulis;
    int tahun_terbit;
    int jumlah;
    int harga;
    int total_harga;
};

vector<buku*> data_buku;

// ================= TAMBAH =================
void tambah() {
    buku* b = new buku();

    cin.ignore(); // buang enter sebelumnya

    cout << "masukkan kode buku : ";
    getline(cin, b->kode);

    cout << "masukkan nama buku : ";
    getline(cin, b->judul);

    cout << "masukkan penulis buku: ";
    getline(cin, b->penulis);

    cout << "masukkan tahun terbit buku: ";
    cin >> b->tahun_terbit;

    cout << "masukkan jumlah buku: ";
    cin >> b->jumlah;

    cout << "masukkan harga buku: ";
    cin >> b->harga;

    b->total_harga = b->jumlah * b->harga;

    data_buku.push_back(b);

    cout << "\ndata buku berhasil ditambahkan!\n";
    system("pause");
}

// ================= TAMPIL =================
void laporan() {
    if (data_buku.empty()) {
        cout << "data buku masih kosong!\n";
        system("pause");
        return;
    }

    cout << "========== DATA BUKU ==========\n";

    double total;
    for (int i = 0; i < data_buku.size(); i++) {
        cout << i + 1 << ". "
             << data_buku[i]->kode << " | "
             << data_buku[i]->judul << " | "
             << data_buku[i]->penulis
             << data_buku[i]->tahun_terbit << " | "
             << data_buku[i]->jumlah << " | "
             << data_buku[i]->harga << " | "
             << data_buku[i]->total_harga << endl;
    }
    cout << "================================\n";

    system("pause");
}

// ================= UPDATE =================
void update() {
    if (data_buku.empty()) {
        cout << "data buku masih kosong!\n";
        system("pause");
        return;
    }

    laporan();

    int nomor;
    cout << "pilih nomor buku yang ingin diupdate: ";
    cin >> nomor;

    if (nomor < 1 || nomor > data_buku.size()) {
        cout << "nomor buku tidak valid!\n";
        system("pause");
        return;
    }

    cin.ignore();

    cout << "masukkan kode buku : ";
    getline(cin, data_buku[nomor - 1]->kode);

    cout << "masukkan judul buku : ";
    getline(cin, data_buku[nomor - 1]->judul);

    cout << "masukkan penulis buku: ";
    getline(cin, data_buku[nomor - 1]->penulis);

    cout << "masukkan tahun terbit buku: ";
    cin >> data_buku[nomor - 1]->tahun_terbit;

    cout << "masukkan jumlah buku: ";
    cin >> data_buku[nomor - 1]->jumlah;

    cout << "masukkan harga buku: ";
    cin >> data_buku[nomor - 1]->harga;

    cout << "\ndata berhasil diupdate!\n";
    system("pause");
}

// ================= HAPUS =================
void hapus() {
    if (data_buku.empty()) {
        cout << "data buku masih kosong!\n";
        system("pause");
        return;
    }

    laporan();

    int nomor;
    cout << "pilih nomor buku yang ingin dihapus: ";
    cin >> nomor;

    if (nomor < 1 || nomor > data_buku.size()) {
        cout << "nomor buku tidak valid!\n";
        system("pause");
        return;
    }

    delete data_buku[nomor - 1]; // hapus dari memory
    data_buku.erase(data_buku.begin() + (nomor - 1)); // hapus dari vector

    cout << "\ndata berhasil dihapus!\n";
    system("pause");
}


// ================= MAIN =================
int main() {
    int menu;

    while (true) {
        system("cls");

        cout << "========== MENU DATA buku ==========\n";
        cout << "1. input buku\n";
        cout << "2. edit buku\n";
        cout << "3. hapus buku\n";
        cout << "4. laporan buku\n";
        cout << "5. keluar program\n";
        cout << "=====================================\n";
        cout << "pilih menu (1-7): ";
        cin >> menu;

        switch (menu) {
            case 1:
                tambah();
                break;
            case 2:
                update();
                break;
            case 3:
                hapus();
                break;
            case 4:
                laporan();
                break;
            case 5:
                cout << "program selesai.\n";
                return 0;
            default:
                cout << "menu tidak valid!\n";
                system("pause");
        }
    }
}
