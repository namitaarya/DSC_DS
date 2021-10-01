class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int pos=1;
        if(arr.size() == 0){
            return 0;
        }
        
        for(int i=1;i<arr.size();i++)
        {
        if(arr[i]==arr[pos-1])
            continue;
        else
        { 
            arr[pos]=arr[i];
            pos++;
        }
        };
        
        return pos;
    }
};