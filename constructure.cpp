#include <iostream>
#include <string>
using namespace std;

class Knight{
    public :

    string nama;
    int health;

    // Constructure
    Knight(string n, int h){
        nama = n;
        health = h;

    }

    void serang(){
        cout << nama << "Menyerang Musuh ..." << endl;
    }
};




int main(){
   Knight k1("Juan ", 100);
   Knight k2("Mesak ", 90);
   Knight k3("Udina ", 95);

   k1.serang();
   k2.serang();
   k3.serang();


    return 0;
}