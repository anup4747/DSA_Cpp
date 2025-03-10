#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

// majarity elements using sorted array another approach 

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
    vector<int> nums = {6,5,5};
    // this have a bug of when we give 3 elements in array and 2 major elemets after sorting it returns always last element
    // and if i give array of 6 8 8 then the sorted will be 8 8 6 but it will always give the last element not first 
    int answer = majElement(nums);
    cout << "The majoriy element in the array is : "<<answer<< endl;

    return 0;
}
