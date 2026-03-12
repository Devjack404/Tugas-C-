#include <iostream>
using namespace std;

int main (){
//     int arr[] = {64, 25, 12, 22, 11};
// int n = 5;
// ```

// **Tugasmu:**

// 1. Tulis bubble sort lengkap (outer + inner loop) di C++
// 2. Print array **setelah setiap putaran** — contoh output yang diharapkan:
// ```
// Putaran 1: 25 12 22 11 64
// Putaran 2: 12 22 11 25 64
// ...

    int arr[] = {64, 25, 12, 22, 11};
    int  n = 5;
    

    for (int i = 0; i < n ; i++){
        bool adaSwap = false;
        for(int j = 0; j < n -1 -i ; j++){
            if(arr[j] > arr[j + 1]){
                //tukar
                int kos = arr[j];
                arr[j] = arr[j + 1];
                arr[j+1] = kos;
                adaSwap = true;
            }       
        }
        if(adaSwap == false) break;
        cout << "putaran " << i+1 << " : ";
        for (int j = 0; j < n; j++){
            cout << arr[j] << " ";   
        }
        cout << endl;
    }

    return 0;
};