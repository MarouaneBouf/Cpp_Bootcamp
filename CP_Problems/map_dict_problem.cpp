
/* PROBLEM FROM CODEFORCES_GYM https://codeforces.com/gym/103937/problem/A */

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<string> split(string s)
{
    string res = "";
    vector<string> V;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] != ' ')
        {
            res += s[i];
        }
        else
        {
            V.push_back(res);
            res = "";
        }
    }
    V.push_back(res);
    return V;
}


int main(void)
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    // freopen("tests.txt","r",stdin);

    int T;
    cin >> T;
    map<string,int> M = {{"100",0}, {"200",0}, {"300",0},{"400",0}, {"500",0}};
    string s;
    vector<string> V;
    while (T-- != -1)
    {
        getline(cin,s);
        V = split(s);
        for(auto &i: M)
        {
            if ((find(V.begin(), V.end(), i.first)) != V.end())
            {
                i.second++;
            }
        }
    }
    for(auto i: M)
    {
        cout << i.second << " ";
    }
    cout << "\n";
}