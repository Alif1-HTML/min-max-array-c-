#include <iostream>
#include <algorithm>
#include <vector>

int main(){
    int arr[] = {10, 5, 40, 39, 111, 90, 84, 74, 75 };
    int n = sizeof(arr)/sizeof(arr[0]);

    int max = arr[0];
    int min = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    std::cout << "Maximum element: " << max << std::endl;
    std::cout << "Minimum element: " << min << std::endl;
    return 0;
}