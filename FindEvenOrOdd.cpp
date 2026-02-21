#include <iostream>
using namespace std;

int main(){
    int arr[] = {45, 75, 89, 4, 56};
    int evenNum = 0;
    int oddNum = 0;
    int n = 5;

    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            evenNum = evenNum + 1;
        }else{
            oddNum = oddNum + 1;
        }  
    }
    cout << "Even Numbers in Array is: " << evenNum << endl;
    cout << "Odd Numbers in Array is: " << oddNum << endl;
}