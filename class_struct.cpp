#include <iostream>
using namespace std;


class Mahasiswa {
    public :
        string nama;
        string nim; 

        void perkenalan(){
            cout << "Halo, nama saya " << nama << " dengan NIM " << nim << endl;
        }
};

int main() {
    Mahasiswa mhs;
    mhs.nama = "Juan";
    mhs.nim = "12345";
    mhs.perkenalan();

    return 0;
}