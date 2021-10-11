class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int answer= INT_MIN;
        int maxSum= 0;
        for(int i=0;i<nums.size();i++)
        {
            maxSum= maxSum+nums[i];
            answer= max(answer, maxSum);
            
            if(maxSum<0)
                maxSum=0;
        }
        return answer;
    }
};