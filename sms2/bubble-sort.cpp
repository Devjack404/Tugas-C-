#include <iostream>
using namespace std;

int main (){
    int arr[] = {5, 3, 8, 1};
    int n = 4;

    for(int i = 0; i < n; i++){
        for ( int j = 0; j < n -1 -i; j++){
            if(arr[j] > arr[j + 1]){
                int sementera = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = sementera;
            }
        }
    }
    for (int i = 0; i < n;i++){
        cout << arr[i] << " ";
    }
















//     int arr[] = {5, 3, 8, 1};
//     int n = 4;

//     for(int i = 0; i < n ;i++){
//         for(int j = 0; j < n -1 -i ; j++){
//             if(arr[j] > arr[j + 1]){
//                 //tukar
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }

//     for(int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }


//     return 0;
};