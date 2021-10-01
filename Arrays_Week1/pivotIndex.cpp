class Solution {
public:
    int pivotIndex(vector<int>& nums)
    {
        int sum1=0;
        
        for(int i=0;i<nums.size();i++)
            sum1+=nums[i];
        
        int sum2=0;
                
        for(int r=0; r<nums.size() ; r++ )
        {                 
            sum1-=nums[r];   
          
            
            if(sum1==sum2)
                return r;
         
              sum2+=nums[r];

    
        }
        
        return -1;
        
    }
};