// mari buat kode program untuk 
//menebak apakah sebuah angka merupakan 
//bilangan genap atau bilangan ganjil:

// #include <iostream>
// using namespace std;

// int main(){
//     // int a;

//     // cout<<"=============="<<endl;
//     // cout<<"Masukan Angka anda : ";
//     // cin>>a;

//     // if(a % 2 == 0){
//     //     cout<<a<<" adalah angka genap"<<endl;
//     // }
//     // else if(a % 2 == 1) {
//     //     cout<<a<<" adalah angka ganjil"<<endl;
//     // }
//     // return 0;
// }


#include <iostream>

using namespace std;

int main(){
    int totalBelanja;
    float diskon;
    float harga_akhir;

    cout<<"Masukan total belanja : Rp";
    cin>>totalBelanja;

    if(totalBelanja < 100000){
        diskon = 0;
    }
    else if (totalBelanja >= 100000 && totalBelanja < 500000){
        diskon = 0.10;
    }
    else if (totalBelanja >= 500000 && totalBelanja < 1000000){
        diskon = 0.20;
    }
    else if (totalBelanja >= 1000000){
        diskon = 0.30;
    }
    else{
        cout<<"input tidak valid, silahkan ulangi lagi ! "<<endl;
        return 0;
    }
    
    //===================================
    //hasil pembayaran(struct pembayaran)
    //===================================
    cout<<"=================================="<<endl;
    harga_akhir = totalBelanja - (diskon*totalBelanja);
    cout<<"Harga total belanja anda : Rp"<<totalBelanja<<endl;
    cout<<"Anda mendapat diskon sebesar :"<<diskon*100<<"%"<<endl;
    cout<<"Harga setelah diskon : Rp"<<harga_akhir<<endl;
    
    return 0;
}
