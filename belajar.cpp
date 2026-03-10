#include <iostream>
using namespace std;

// Struct itu bisa akses dimana saja / bersifat public;
// gunakan struct jika ingin data yang sederhana spt : (x,y,z)


// Class itu hanya bisa di akses di dalam scopenya / bersifat private;
// Gunakan class untuk logika yang complex

struct Buku {
    string nama;
    string penulis;
    int tahunTerbit;
};

struct Mahasiswa {
    string nama;
    int nim;
};

int main(){
    Mahasiswa mhs1;
    mhs1.nama = "Budi";
    mhs1.nim = 12345;


    cout <<"Nama    : " << mhs1.nama << endl;
    cout <<"Nim     : "<< mhs1.nim << endl;
    
    return 0;
}