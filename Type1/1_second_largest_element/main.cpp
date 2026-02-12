#include <climits>
#include <iostream>
using namespace std;

int findSecondLargestElement(int arr[], int n){
    if(n <= 1) return -1;
    int max = INT_MIN;
    int secondMax = INT_MIN;
    for(int i = 0; i < n; i++){
        if(max < arr[i]){
            secondMax = max;
            max = arr[i];
        } else if(secondMax < arr[i] && arr[i] != max){
            secondMax = arr[i];
        }
    }
    if(secondMax == INT_MIN) return max;
    return secondMax;
}

int main(){
    int arr[] = {4,5,3,1,2};
    cout << findSecondLargestElement(arr, sizeof(arr)/sizeof(arr[0])) <<"\n";
    int arr2[] = {1};
    cout << findSecondLargestElement(arr2, sizeof(arr2)/sizeof(arr2[0]))<<"\n";
    int arr3[] = {4,4,4,4};
    cout << findSecondLargestElement(arr3, sizeof(arr3)/sizeof(arr3[0]))<<"\n";
    int arr4[] = {5,5,4};
    cout << findSecondLargestElement(arr4, sizeof(arr4)/sizeof(arr4[0]))<<"\n";
    return 0;
}