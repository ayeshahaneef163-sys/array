#include <iostream>
using namespace std;

int main(){
    int arr[5] = {4, 7, 5, 9, 10};
    int max = arr[0];
    int n = 5;
    for(int i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout << "Maximum Element of Array is: " << max;
    return 0;
}