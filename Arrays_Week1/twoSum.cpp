class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans; 
        vector<int> haha = nums; 
        vector<int> finans; 
        set<int> s; 
        
        sort(nums.begin(),nums.end());
        
        for(int i=0, j=nums.size()-1 ; i<j; )
        {
             if(nums[i]+nums[j]==target){
                ans.push_back(nums[i]);
                ans.push_back(nums[j]);
             }
            
            (nums[i] + nums[j] < target)? ++i: j--;
        }
        
        for(int i=0;i<nums.size();i++)
        {
               if(haha[i]==ans[0]){
                   finans.push_back(i);
                   continue;
               }
                if(haha[i]==ans[1]){
                    finans.push_back(i);
                    continue;   
                }
                if(finans.size()==2)
                    break;
                   
        }
        return finans;
    }
};