class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        int i = 0;
        int j = nums.size()-1;
        int start = -1;
        int end = -1;
        while(i <= j)
        {
            int mid = (i+j)/2;
            if(nums[mid] == target)
            {
               int temp = mid;
                
                while(mid > 0 && nums[mid-1] == target) 
                    mid--;
                
                start = mid;
                
                while(temp < nums.size()-1 && nums[temp+1] == target) 
                    temp++;
                
                end = temp;
                
                ans.push_back(start);
                ans.push_back(end);
                return ans;
            }
            
            else if(nums[mid] > target)
                j = mid-1;
            else
                i = mid+1;
        }
        
        ans.push_back(-1);
        ans.push_back(-1);
        return ans;
    }
};