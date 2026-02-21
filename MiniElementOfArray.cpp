#include <iostream>
using namespace std;

int main(){
    int arr[5] = {3, 7, 45, 98, 63};
    int min = arr[0];
    int n = 5;

    for(int i = 0; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    cout << "Minimum Element of Array is: " << min << endl;
    return 0;
}