#include <iostream>
using namespace std;

class Mahasiswa {
    public:
        string nama;
        string nim;

        // Constructor
        Mahasiswa(string n, string i) {
            nama = n;
            nim = i;
        }

        void perkenalan() {
            cout << "Halo, nama saya " << nama << " dengan NIM " << nim << endl;
        }
};

int main() {
    Mahasiswa mhs("Juan", "12345"); // langsung isi saat dibuat
    mhs.perkenalan();

    return 0;
}