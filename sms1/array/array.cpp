#include <iostream>
#include <array>
using namespace std;


int main(){
    //membuat array dengan stadart library
    //array<int, jumlah array> nama array

    array<int, 5> nilai;

    for(int i =0; i <=4; i++){
        nilai[i] =i;
        cout << "nilai [" << i << "] = " << nilai[i];
        cout << " address : " << &nilai[1] << endl;

    }
    cout << endl;
    //ukuran awal
    cout <<"ukuran : " << nilai.size() << endl;
    //addres awal dari array
    cout <<"address awal : " << nilai.begin() << endl;
    //addres akhir dari array
    cout <<"address akhir : " << nilai.end() << endl;
    cin.get();
    return 0;
}
