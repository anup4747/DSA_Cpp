#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

// majarity elements using sorted array

int majElement(vector<int> nums)
{

    int ans = nums[0];
    int n = nums.size();
    int freq = 1;
    sort(nums.begin(), nums.end());
    for (int i = 1; i< n; i++)
    {   
        if(nums[i] == nums[i-1]){
            freq++;
        }else{
            freq=1;
            ans=nums[i];
        }

        if(freq > n/2){
            return ans;
        }
    }
    return ans;
}


int main()
{
    vector<int> nums = {0,0,1,1,2,2,2,2};
    int answer = majElement(nums);
    cout << "The majoriy element in the array is : "<<answer<< endl;

    return 0;
}
