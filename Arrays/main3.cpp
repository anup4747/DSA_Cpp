#include <iostream>
using namespace std;


int main() {
    // Your code here
    // Linear Search
    int arr[] = {4,2,7,8,1,2,5};
    int target = 8;
    int index= 0;

    for (int i = 0; i <6 ; i++)
    {
        // cout << arr[i] << endl;
        if(arr[i] == target){
            index= i;
            break;
        }else{
            index = -1;
        }
    }

    if (index == -1){
        cout << "Given Target not found";
    }else{
        cout << "The index is : " <<  index << endl;
    }
    return 0;
}