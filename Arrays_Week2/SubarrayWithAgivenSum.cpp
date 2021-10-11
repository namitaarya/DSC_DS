    vector<int> subarraySum(int arr[], int n, long long s)
    {
        vector<int> vec;
         int sum, i, j;

    for (i = 0; i < n; i++) {
        sum = arr[i];

        for (j = i + 1; j <= n; j++) {
            if (sum == s) {
                vec.push_back(i+1);
                vec.push_back(j);
                return vec;
            }
            
            if (sum > s || j == n)
                break;
            sum = sum + arr[j];
        }
        
    }
    vec.push_back(-1);
      return vec;
    }