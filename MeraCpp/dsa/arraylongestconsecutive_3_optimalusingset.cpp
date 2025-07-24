#include<bits/stdc++.h>
using namespace std;
  
int longestConsecutive(vector<int>& nums) {

    /*
 * Optimal Solution for Longest Consecutive Sequence (O(N) Time, O(N) Space)
 * 
 * Approach:
 * 1. Store all elements in an `unordered_set` for O(1) lookups.
 * 2. Iterate through each unique element:
 *    - If `it - 1` is not in the set, it means `it` is the start of a sequence.
 *    - Expand the sequence by checking `it + 1, it + 2, ...` until the sequence breaks.
 * 3. Keep track of the longest sequence found.
 * 
 * Complexity:
 * - Time: O(N) (Each element is processed once)
 * - Space: O(N) (Uses `unordered_set` to store elements)
 */
    int n= nums.size();
    if(n==0) return 0;
    int longest = 1;
    unordered_set<int> st;
    for(int i=0;i<n;i++)
    {
        st.insert(nums[i]);
    }
    for(auto it:st)
    {
        if(st.find(it-1) == st.end())
        {
            int cnt = 1;
            int x = it;
            while(st.find(x+1)!= st.end())
            {
                x=x+1;
                cnt++;
            }
            longest = max(longest, cnt);
        }
    }

    return longest;
}
int main()
{
    vector<int> test = {0,3,7,2,5,8,4,6,0,1};
    int con = longestConsecutive(test);
    cout<<con;
   

    return 0;
}