//Date:- 21/12/2024

//LeetCode Question:- 1

//Code in C++ : 

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n;
        n = nums.size();
        for( int i=0; i<n-1;i++)
        {
            for( int j=i+1;j<n;j++){

            if (nums[i]+nums[j]==target){
                return{i,j};
            }
            }
        }
        return {};
        
    }
};

//# Time COmplexity is O(n^2). 