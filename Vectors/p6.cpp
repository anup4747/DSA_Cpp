#include<iostream>
#include<vector>
using namespace std;

// kadane's algorithm

int main(){

    int n= 7;
    int arr[7] = {3,-4,5,4,-1,1,7-8};
    int currnet_sum = 0;
    int max_sum = 0;
    for(int st=0; st<n ; st++){
     
            currnet_sum += arr[st];
            max_sum = max(currnet_sum , max_sum);
            if (currnet_sum < 0){
                currnet_sum = 0;
            }
            cout<< max_sum << endl;
      
    }

    cout<< max_sum << endl;
    return 0;
}