//My Approach  Using C++ :- 
//In C++ Code:- 

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n;
       n = nums.size();
      // int n = nums;
        sort(nums.begin(),nums.end());
        for ( int i= 0; i< n-1; i++)
        {
            if ( nums[i]==nums[i+1])
            {
                return true;
            }
        }
        return false;

        
    }
};


//It runs effectively.

// # It has Time Complexity of O(nlogn). 
//Note :-  Using Sort.

