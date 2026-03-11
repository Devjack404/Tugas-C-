#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Barang {
    string nama;
    int harga, jumlah, total;
};

int main (){
    Barang a[2];

    // 1. Tambahkan variabel untuk menyimpan total semua belanjaan
    long long total_semua = 0;

    for (int i = 0; i < 2 ; i++){
        cout<<"Data Ke-"<<i+1<<endl;
        cout<<"Masukan Nama Barang :  ";
        // Menggunakan cin.ignore() dan getline untuk menangani nama dengan spasi
        if (i > 0) cin.ignore(); // Membersihkan buffer input setelah cin >> jumlah
        getline(cin, a[i].nama);
        
        cout<<"Masukan Harga Barang :  ";
        cin>>a[i].harga;
        
        cout<<"Masukan Jumlah Barang :  ";
        cin>>a[i].jumlah;
        
        a[i].total = a[i].harga * a[i].jumlah;
        // 2. Akumulasikan total setiap barang ke total_semua
        total_semua += a[i].total;
        cout << endl;
    }


    cout<<"====================================="<<endl;
    // 3. Perbaiki header tabel agar sesuai dengan data yang ditampilkan
    cout<<setw(10)<<"Nama"
        <<setw(10)<<"Harga"
        <<setw(10)<<"Jumlah"
        <<setw(10)<<"Total"<<endl;
    cout<<"====================================="<<endl;


    for(int b=0; b < 2; b++){
        // 4. Tampilkan semua data barang dengan lengkap
        cout<<setw(10)<<a[b].nama
            <<setw(10)<<a[b].harga
            <<setw(10)<<a[b].jumlah
            <<setw(10)<<a[b].total<<endl;
    }
    
    cout<<"====================================="<<endl;
    // 5. Tampilkan total_semua yang sudah dihitung, bukan a[i].total
    cout<<"Total Bayar : Rp"<<total_semua<<endl;
    cout<<"====================================="<<endl;    


    return 0;
}