#include <iostream>
#include <string>
using namespace std;

int main (){
    long long harga_total_bayar =0,jumlah_jenis_pesanan = 1, total_harga =0, i = 1, harga_satuan =0, jumlah_beli =0, total_harga_akhir =0;
    string nama_barang, status_pelanggan, bonus;
    double diskon =0, setelah_diskon =0, potongan_pelanggan =0;

    cout<<"Masukan Jumlah Jenis Pesanan :";
    cin>>jumlah_jenis_pesanan;


    while(i <= jumlah_jenis_pesanan){
        cout<<"====================="<<endl;
        cout<<"Pesanan ke-"<<i<<endl;
        cout<<"====================="<<endl;
        cout<<"Masukan Nama barang :";
        cin>>nama_barang;
        cout<<"Masukan Harga Satuan :";
        cin>>harga_satuan;
        cout<<"Masukan Jumlah Beli :";
        cin>>jumlah_beli;
        cout<<"Status Pelanggan apakah Tetap ? [y/t] :";
        cin>>status_pelanggan;

        total_harga = harga_satuan * jumlah_beli;

        if(jumlah_beli > 10 && jumlah_beli < 19){
            diskon = 0.10 * total_harga;
        }
        else if(jumlah_beli > 20){
            diskon = 0.15 * total_harga;
        }
        else{
            diskon = 0;
        }


        setelah_diskon = total_harga - diskon;


        if(status_pelanggan == "y" || status_pelanggan == "Y"){
            potongan_pelanggan = 0.05 * setelah_diskon;
        }
        else {
            potongan_pelanggan = 0 * setelah_diskon;
        }

        total_harga_akhir = setelah_diskon - potongan_pelanggan;
        harga_total_bayar +=total_harga_akhir;
        i++;
    }

    if(harga_total_bayar >1500000 && harga_total_bayar < 3000000){
        bonus = "Bonus 1 Payung Cantik";
    }
    else if(harga_total_bayar > 3000000){
        bonus = "Bonus Payung & Cangkir Ekslusif";
    }
    else{
        bonus = "Bonus Gantungan Kunci";
    }

    cout<<"===================================:"<<endl;
    cout<<"=============== NOTA ==============:"<<endl;
    cout<<"===================================:"<<endl;
    cout<<"Nama Barang :"<<nama_barang<<endl;
    cout<<"Harga Barang :"<<harga_satuan<<endl;
    cout<<"Jumlah Beli :"<<jumlah_beli<<endl;
    cout<<"Diskon :"<<diskon<<endl;
    cout<<"Potongan :"<<potongan_pelanggan<<endl;
    cout<<"===================================:"<<endl;
    cout<<"Total Semua :"<<harga_total_bayar<<endl;
    cout<<"Bonus :"<<bonus<<endl;
    cout<<"===================================:"<<endl;


    return 0;
}