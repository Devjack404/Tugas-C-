#include <iostream>
using namespace std;


class Mahasiswa {
    private :
    string nama;
    string nim; 

    public :
    //getter
    string getNim(){
        return nim;
    };

    // setter
    void setNim(string i){
        nim = i;
    };

};

int main() {
    Mahasiswa mhs;

    mhs.setNim("11221");
    cout << mhs.getNim();
    return 0;
}