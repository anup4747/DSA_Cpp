

#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;


// Same problem with Moore's voting alogrithm

int majElement(vector<int> nums)
{

    int ans = nums[0];
    int n = nums.size();
    int freq = 0;
    
    for (int i =0; i< n; i++)
    {   
        if(freq == 0 ){
            ans = nums[i];
        }
        if(ans== nums[i]){
            freq++;

        }else{
            freq--;
        }
    
    }
    return ans;
}


int main()
{
    vector<int> nums = {6,5,5,8,8,8,7};
    // this have a bug of when we give 3 elements in array and 2 major elemets after sorting it returns always last element
    // and if i give array of 6 8 8 then the sorted will be 8 8 6 but it will always give the last element not first 
    int answer = majElement(nums);
    cout << "The majoriy element in the array is : "<<answer<< endl;

    return 0;
}
