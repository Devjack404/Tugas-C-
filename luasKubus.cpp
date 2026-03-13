#include <iostream>
using namespace std;

class Kubus {
    private:
        float s;  // atribut sisi

    public:
        // Constructor
        Kubus(float sisi) {
            s = sisi;
        }

        // Method hitung luas
        void hitungLuas() {
            float luas = 6 * s * s;
            cout << "Luas Permukaan Kubus = " << luas << endl;
        }
};

int main() {
    Kubus obj(4);    // constructor dipanggil, s = 4
    obj.hitungLuas();

    return 0;
}
