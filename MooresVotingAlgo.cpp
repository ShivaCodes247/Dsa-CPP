// QUESTION1: Majority Element (Classic)

// 👉 Given an array, find the element that appears more than n/2 times.

// Example:

// Input: [3, 2, 3]
// Output: 3

#include <iostream>
using namespace std;
int main ()
{
    int nums[] = {3,2,3,1,1,1,1};
    int freq = 0;
    int ans = 0;
    int n = sizeof(nums)/sizeof(nums[0]);
    for (int i=0; i<n; i++)
    {
        if(freq==0)
        {
            ans = nums[i];
        }
        if(ans == nums[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
       
    }
    cout<<ans<<endl;

    return 0;
}