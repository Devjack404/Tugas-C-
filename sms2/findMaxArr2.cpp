#include <iostream>
using namespace std;
// array = [3, 7, 1, 9, 4]
// max = 3

// index 1 → 7 > 3? ✅ → max = 7
// index 2 → 1 > 7? ❌ → max tetap 7
// index 3 → 9 > 7? ✅ → max = 9
// index 4 → 4 > 9? ❌ → max tetap 9

// tampilkan 9 ✅

int main (){
    int arr[] = {3, 7, 1, 9, 4};
    int n = 5;
    int max = arr[0]; 

    for(int i = 0; i < n ; i++){
        if(arr[i] > max){
           max = arr[i];
        }
    }
    
    cout << max << endl;


    return 0;
}