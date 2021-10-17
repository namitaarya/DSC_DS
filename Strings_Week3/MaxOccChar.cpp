class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        map<char, int> m;
        int ans=0;
        char aaa;
        
        for(int i=0;i<str.length();i++)
            m[str[i]]++;
        
        for(auto i=m.begin();i!=m.end();i++)
            {
                if(i->second>ans){
                    ans= i->second;
                    aaa= i->first;
                }
            }
            
            return aaa;
    }

};