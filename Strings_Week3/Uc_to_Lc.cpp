#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;

    int i=0;

    while(i<str.length())
    {
        if(isupper(str[i]))
            str[i]+=32;

        else
            str[i]-=32;

            i++;
    }

    cout<<str;
}
