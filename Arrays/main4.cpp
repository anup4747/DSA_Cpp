#include <iostream>
using namespace std;

void reverseArray(int arr[], int size){

    int start = 0, end = size-1;

    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}


int main() {
    // Your code here
    int arr[] = {4,2,7,8,1,2,5};
    int sz = 7;

    reverseArray(arr, sz);

    for (int i = 0; i < sz; i++)
    {   
        cout << arr[i] << " ";
        /* code */
    }
    


    return 0;
}