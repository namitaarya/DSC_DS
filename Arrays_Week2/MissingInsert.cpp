class Solution {
public:
    int i=0;
    int searchInsert(vector<int>& nums, int target) {
        if(target>nums[nums.size()-1])
            return nums.size();
        if(target<nums[0])
            return 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target )
                return i;
            else{
                if(nums[i]>target)
                    return i;
            }
        }
        return i;
    }
};