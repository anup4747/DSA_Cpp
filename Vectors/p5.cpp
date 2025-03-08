#include<iostream>
#include<vector>
using namespace std;

//Maximum Subarray Sum

int main(){



    
    int n= 7;
    int arr[7] = {3,-4,5,4,-1,1,7-8};
    int currnet_sum = 0;
    int max_sum = 0;
    for(int st=0; st<n ; st++){
        currnet_sum = 0;
        for(int end=st ; end < n ; end++){
            currnet_sum += arr[end];
            max_sum = max(currnet_sum , max_sum);
           
        }
       
    }

    cout<< max_sum << endl;
}