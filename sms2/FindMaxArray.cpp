#include <iostream>
using namespace std;

// function cariMax
int cariMaksimum(int arr[], int n){
    int max = arr[0];
    for(int i = 1; i < n ; i++){
        if(arr[i] > max){
           max = arr[i]; 
        }
    }

    return max;
};

int main (){
    int arr[5] = {5, 2, 9, 1, 7};
    int n = 5;

    cout << "Nilai maksimum pada array : " << cariMaksimum(arr, n) << endl;
    return 0;
}