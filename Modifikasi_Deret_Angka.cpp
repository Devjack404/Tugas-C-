#include <iostream>
using namespace std;

int main(){
    // Buat program yang meminta pengguna memasukkan satu bilangan n, 
    // lalu menghitung jumlah semua bilangan dari 1 sampai n menggunakan 
    // perulangan for.

    int n;
    int total = 0;
    cout<<"Masukan angka yang ingin di jumlah";
    cin>>n;
    for(int i = 0; i<=n; i++){
        total += i;
    }
    cout<<"Hasil penjumlahan dari 1 sampai "<<n<<" hasilnya "<<total<<endl;
}