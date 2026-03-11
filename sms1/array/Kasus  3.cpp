#include <iostream>
using namespace std;

int main() {
    int arr[3][2];//[Baris] [Kolom]


    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            cout << "Input elemen baris ke-" << i << " kolom ke-" << j << ": ";
            cin >> arr[i][j];
        }
    }

    cout << endl << "Hasil Array:" << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}