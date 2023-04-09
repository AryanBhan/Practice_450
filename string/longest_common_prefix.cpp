#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> v;
    for (int i = 0; i < 5; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    int min_size = INT_MAX;
    for (int i = 0; i < 5; i++)
    {
        if (v[i].length() < min_size)
            min_size = v[i].length();
    }
    int flag =0;

    for (int j = 0; j < min_size; j++)
    {

        char ch = v[0][j];
        flag = j;
        for (int i = 1; i < 5; i++)
        {
            if (v[i][j] != ch)
            {

                break;
            }
        }
    }
    if (flag == 0)
        cout << "No Common Prefix";
    else
        cout << v[0].substr(0, flag);

    return 0;
}