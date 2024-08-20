// one loop with k: O(n) beats 42.27%
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();
        int k=1,last=nums[0];
        for(int i=0;i<size;i++){
            if(last<nums[i]){
                nums[k++]=nums[i];
            }
            last=nums[i];
        }
        return k;
    }
};

// count array approach: O(n) beats 75.04%
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();
        int i=0,k=0,noOfUnique=201;
        int *count = new int[noOfUnique]{0};
        for(i;i<size;i++){
            count[nums[i]+100]++;
        }
        for(i=0;i<noOfUnique;i++){
            if(count[i]){
                nums[k++]=i-100;
            }
        }
        return k;
    }
};
// new unique array approach: O(n) beats 96.21%
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();
        int i,k=1,last=nums[0];
        int *unique = new int[size]{0};
        unique[0]=last;
        for(i=1;i<size;i++){
            if(last<nums[i]){
                unique[k++]=nums[i];
            }
            last=nums[i];
        }
        for(i=1;i<k;i++){
            nums[i]=unique[i];
        }
        return k;
    }
};
