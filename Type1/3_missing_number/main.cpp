#include <iostream>
using namespace std;

int findMissingNumber(int arr[], int n){
    if(n == 0) return 0;
     int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    int total = (n*(n+1)) / 2;
    return total-sum;
}

int main(){
    int arr[] = {3,0,1,2};
    int n = 4;
    cout << findMissingNumber(arr, n) << "\n";

    return 0;
}