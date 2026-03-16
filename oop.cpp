#include <iostream>
#include <string>

using namespace std;


class Mahasiswa {
    public :

    string nama;
    string nim;
    int umur;

    int Luas (int p, int l){
        return p * l;
    }
};

int main () {
    Mahasiswa mhs1, mhs2, x;

    mhs1.nama ="Jack";
    mhs1.nim = "A11.2025";
    mhs1.umur = 19;
    
    mhs2.nama ="Budi";
    mhs2.nim = "A11.2024";
    mhs2.umur = 20;
    
    
    cout << "Data Mahasiswa 1" << endl; 
    cout << "Nama : " << mhs1.nama << endl;
    cout << "Nim : " << mhs1.nim << endl;
    cout << "Umur : " << mhs1.umur << endl;
    cout << endl;

    cout << "Data Mahasiswa 2" << endl; 
    cout << "Nama : " << mhs2.nama << endl;
    cout << "Nim : " << mhs2.nim << endl;
    cout << "Umur : " << mhs2.umur << endl;
    cout << endl;



    cout << "Test Function" << endl;
    cout << "Luas Persegi : " << x.Luas(3,4) << endl;


    return 0;
}