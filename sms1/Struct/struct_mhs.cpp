#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct mahasiswa{
    string nama, nim;
    int nilaiTugas, nilaiUts, nilaiUas;
    float nilaiAkhir; // Hapus nilaiIpk karena tidak digunakan dengan benar
};

int main (){
    mahasiswa a[3];

    for(int i=0; i < 3; i++){
        cout<<"Data Ke-"<<i+1<<endl;    
        cout<<"Masukan Nama Mahasiswa : ";
        getline(cin, a[i].nama);
            
        cout<<"Masukan NIM Mahasiswa : ";
        getline(cin, a[i].nim);

        cout<<"Masukan Nilai Tugas Mahasiswa : ";
        cin>>a[i].nilaiTugas;

        cout<<"Masukan Nilai UTS Mahasiswa : ";
        cin>>a[i].nilaiUts;

        cout<<"Masukan Nilai UAS Mahasiswa : ";
        cin>>a[i].nilaiUas;

        a[i].nilaiAkhir = (a[i].nilaiTugas * 0.3) + (a[i].nilaiUts * 0.3) + (a[i].nilaiUas * 0.4);
        cout<<endl;

        cin.ignore();
    }   

        cout<<"================"<<endl;
        cout<<"Daftar Mahasiswa"<<endl;
        cout<<"================"<<endl;

    for(int j=0 ; j < 3; j++){
        // Tampilkan data setiap mahasiswa dengan format yang rapi
        cout <<a[j].nama << setw(10) << a[j].nim << setw(10) << a[j].nilaiAkhir << endl;
    }
    
    // Buat loop terpisah untuk mengecek dan menampilkan mahasiswa dengan nilai >= 80
    cout<<"=========================================="<<endl;
    cout<<"   Mahasiswa dengan Nilai Tertinggi   "<<endl;
    cout<<"=========================================="<<endl;
    for(int j=0; j < 3; j++){
        if(a[j].nilaiAkhir >= 75){
            cout << a[j].nama << " (" << a[j].nilaiAkhir << ")" << endl;
        }
    }

    return 0;
}