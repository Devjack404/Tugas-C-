#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

struct buku{
    string kode;
    string judul;
    string penulis;
    int tahun_terbit;
    int jumlah;
    int harga;
    int total_harga;
};

vector<buku*> data_buku;

// ===================== Tambah Buku =======================

void tambah(){
    buku* tambah_buku = new buku();

    cin.ignore(); // menghapus enter sebelumnya

    cout << " Masukan Kode Buku " ;
    getline (cin, tambah_buku -> kode); 
    
    cout << " Masukan Judul Buku " ;
    getline(cin, tambah_buku -> judul); 
    
    cout << " Masukan penulis Buku " ;
    getline(cin, tambah_buku -> penulis); 
    
    cout << " Masukan Tahun Terbit Buku " ;
    cin >> tambah_buku -> tahun_terbit; 
    
    cout << " Masukan Jumlah Buku " ;
    cin >> tambah_buku -> jumlah; 

    cout << " Masukan Harga Buku " ;
    cin >> tambah_buku -> jumlah; 

    tambah_buku -> total_harga = tambah_buku -> harga * tambah_buku -> jumlah;

    data_buku.push_back(tambah_buku);

    cout << " Buku telah ditambahkan ";

};

//================ Tampilan ======================
void laporan(){
    if(data_buku.empty()){
        cout << "Data buku masih kosong" << endl;
    }
    system("berhenti semetara");
    return;

    //=============== Menapilkan Data Buku ============

    for(int i = 0; i < data_buku.size(); i++){
        cout << i + 1 << ". " << endl;
        cout << data_buku[i] -> kode << " | " << endl;
        cout << data_buku[i] -> judul << " | " << endl;
        cout << data_buku[i] -> penulis << " | " << endl;
        cout << data_buku[i] -> tahun_terbit << " | " << endl;
        cout << data_buku[i] -> jumlah << " | " << endl;
        cout << data_buku[i] -> harga << " | " << endl;
        cout << data_buku[i] -> total_harga << " | " << endl;
    }
    cout << "========================================" << endl; 
  
    system("berhenti semetara");
};


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
