#include <iostream>
#include <string>
using namespace std;


// latihan kecil
// coba tambahkan:

// atribut int level ke class knight
// ubah constructor supaya menerima level juga
// buat fungsi info() yang mencetak nama, health, dan level

class Knight{
    public :

    string nama;
    int health;
    int level;


    // Constructure
    Knight(string n, int h, int l){
        nama = n;
        health = h;
        level = l;

    }

    void serang(){
        cout << nama << "Menyerang Musuh ..." << endl;
        cout << endl; 
    }

    void info(){ 
        cout << "nama : "  << nama << endl;
        cout << "Nyawa : " << health << endl;
        cout  << "Level : " << level << endl;
    }
    
};




int main(){
   Knight k1("Juan ", 100, 50);
   Knight k2("Mesak ", 90, 45);
   Knight k3("Udina ", 95, 48);

   k1.info();
   k1.serang();

   k2.info();
   k2.serang();

   k3.info();
   k3.serang();




    return 0;
}