class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int mini, maxi;
        mini=arr[0];
        maxi=0;
        for(int i=0;i<arr.size()-1;i++)
        {
            if(arr[i+1]>mini){
                maxi=max(arr[i+1]-mini, maxi);
            }
            mini=min(mini, arr[i+1]);
        }
        
        return maxi;
        
        
    }
};