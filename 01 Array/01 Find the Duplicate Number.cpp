// Naive approach Time: O(n^2)

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j])
                    return nums[i];
            }
        }
        return -1;
    }
};

// Count Array(Basic Hash) Time : O(n) Space: O(n) 
// Beats 95.76% solutions

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int size = nums.size();
        int *count = new int[size]{0}; 
        for(int i=0;i<size;i++){
            if(!count[nums[i]])
                count[nums[i]]++;
            else
                return nums[i];
        }
        return -1;
    }
};

