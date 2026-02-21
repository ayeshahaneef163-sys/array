#include <iostream>
using namespace std;

int main(){
    int arr[5] = {4, 7, 5, 9, 2};
    int n = 5;
    int sum = 0;

    for(int i = 0; i < n; i++){
        sum = sum + arr[i];
    }
    cout << "Sum of Array: " << sum << endl;
    return 0;
}