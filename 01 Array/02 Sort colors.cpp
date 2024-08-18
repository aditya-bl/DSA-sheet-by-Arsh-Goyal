// best approach beats 100% O(n)

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count[3]={0};
        int size = nums.size();
        int i=0;
        for(i;i<size;i++){
            count[nums[i]]++;
            nums[i]=0;
        }
        for(i=count[0];i<(count[0]+count[1]);i++)
            nums[i]=1;
        for(i=count[0]+count[1];i<size;i++)
            nums[i]=2;
    }
};
