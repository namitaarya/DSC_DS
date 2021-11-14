#include<bits/stdc++.h>
using namespace std;

class Solution 

{
    
public:
    
    void revHelper(vector<char>& s, int i)
    
    {
         if(i==s.size()/2)
            return;
        swap(s[i],s[s.size()-i-1]);
        revHelper(s,i+1);
    }
    
    void reverseString(vector<char>& s) 
    
    {
        revHelper(s,0);
        for(int i=0;i<s.size();i++)
            cout<<s[i];
    }
    
};