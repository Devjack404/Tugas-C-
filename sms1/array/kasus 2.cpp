#include <iostream>
using namespace std;

int main() {
    int arr[3][3];


    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << "Input elemen baris ke-" << i << " kolom ke-" << j << ": ";
            cin >> arr[i][j];
        }
    }

    cout << endl << "Hasil Array:" << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Array baris 1 kolom 0 : " << arr[1][0] << endl;

    return 0;
}