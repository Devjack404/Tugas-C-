// Diberikan array A=[5, 2, 10, 27, 33]. Buatlah program pengurutan array
// tersebut dengan algoritma bubble sort (lakukan secara ascending atau
// descending)

#include <iostream>

using namespace std;

int main (){
    int arr[] = {5, 2, 10, 27, 33};
    int n = 5;
    int temp = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - 1; j++){
            //proses tukar
            for(int i = 0; i < n; i++){
                cout << arr[i] << " ";
            }
            if(arr[j] > arr[j+1]){
               temp = arr[j];
               arr[i] = arr[j+1];
               arr[j+1]  = temp;
            }
        }
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }



    return 0;
}