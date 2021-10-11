
class Solution{
    public:
    
    int findMissing(int arr[], int n) { 
        
    bool mark[n + 1] = {false};
    for (int i = 0; i < n; i++) {

        if (arr[i] > 0 && arr[i] <= n)
            mark[arr[i]] = true;
    }

    for (int i = 1; i <= n; i++)
        if (mark[i]==false)
            return i;
    return n + 1;

        
    }
};