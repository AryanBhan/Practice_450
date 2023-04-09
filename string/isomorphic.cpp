#include<bits/stdc++.h>
using namespace std;
int main()
{
    //aab xxy
    string s;
    string s2;
    cin>>s>>s2;
    bool flag=true;
    unordered_map<char,char>c;
    for (int i = 0; i < s.length(); i++)
    {
        if(c.count(s[i]))
        {
            if(c[s[i]]!=s2[i])
                {
                    flag=false;
                    break;
                }
        }
        else
        {
            vector<char>count;
            for(auto it:c)
            {
                count.push_back(it.second);
            }
            if(find(count.begin(),count.end(),s2[i])!=count.end())
                {
                    flag=false;
                    break;
                }
            else
                c[s[i]]=s2[i];
        }
    }
    if(flag)
        cout<<"Isomorphic";
    else
        cout<<"Not Isomorphic";
    

    return 0;
}