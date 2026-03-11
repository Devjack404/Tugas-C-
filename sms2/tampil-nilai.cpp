// SOAL
// ============================
// Kasus 1 – Tampil Nilai
// Deskripsi: menampilkan nilai pada sebuah class
// Buatlah sebuah kelas dengan CetakNilai dengan variable didalamnya adalah X, Y
// dan Z.

// a. Lakukan akses member X, Y dan Z dengan 2 object yang berbeda.
// Contoh:
// Object1.X = 10
// Object2.X = 20

// b. Buatlah fungsi di dalam kelas dengan nama CetakX, CetakY, dan CetakZ. Masing
// – masing fungsi tersebut mengembalikan nilai integer.

// c. Tambahkan satu fungsi di dalam kelas dengan nama JumlahXYZ untuk
// menampilkan hasil penjumlahan dari pengembalian nilai CetakX, CetakY, CetakZ.


#include <iostream>
using namespace std;


class CetakNilai {
    public :
    int x;
    int y;
    int z;

    int CetakX (){
       return x;
    }
    int CetakY (){
       return y;
    } int CetakZ (){
       return z;
    }

    int jumlahXYZ(){
        return x+y+z;
    }
};

CetakNilai object1;

int main (){
    object1.x = 10;
    object1.y = 20;
    object1.z = 30;

    int hasilFunctionX, hasilFunctionY, hasilFunctionZ, penjumlahan;

    hasilFunctionX = object1.CetakX(); 
    hasilFunctionY = object1.CetakY(); 
    hasilFunctionZ = object1.CetakZ();
    penjumlahan = object1.jumlahXYZ();


    cout << "Nilai X :" << object1.x << endl; 
    cout << "Nilai Y :" << object1.y << endl; 
    cout << "Nilai Z :" << object1.z << endl; 
    cout << "Nilai Function X :" << hasilFunctionX << endl; 
    cout << "Nilai Function Y :" << hasilFunctionY << endl;
    cout << "Nilai Function Z :" << hasilFunctionZ << endl;
    cout << "Nilai Hasil X + Y + Z :" << penjumlahan << endl;

    return 0;
}