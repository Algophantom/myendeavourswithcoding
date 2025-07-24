#include<bits/stdc++.h>
using namespace std;
  
 int majorityElement(vector<int>& nums) {
     //works when it is definite that a majority element exists
     /*
    Boyer-Moore Voting Algorithm - Intuition:

    1. The idea is to keep a "candidate" element and a "count" tracker.
    2. If count is zero, assume the current element is the majority candidate.
    3. If the current element matches the candidate, increment the count.
    4. If the current element differs, decrement the count.
    5. The majority element (if it exists) will always survive because:
       - A majority element appears more than ⌊n/2⌋ times.
       - Other elements can only cancel out at most n/2 occurrences.
       - Hence, the majority element remains as the last standing candidate.
    
    Time Complexity: O(n) → Single pass.
    Space Complexity: O(1) → Only two variables used.
*/
    int count=0;
    int element=0;
     for(int i=0;i<nums.size();i++)
     {
        if(count==0)
        {
            element = nums[i];
            count=1;
        }
        else if(nums[i]==element)
        {
            count++;
        }
        else if(nums[i]!=element)
        {
            count--;
        }

     }

     return element; //TC = O(N), since it only traverses once through the array
     //SC = O(1) since it does not store data elsewhere
     
    }
  
int main()
{
    vector<int>nums={2,2,1,3,1,1,3,1,1};
    int count=majorityElement(nums);
    cout<<count;
    return 0;
}