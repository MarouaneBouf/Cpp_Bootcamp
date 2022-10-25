
/* PROBLEM FROM CODEFORCES_GYM https://codeforces.com/gym/103937/problem/A */

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// /* A function that takes a string and returns a vector of strings. */

//vector<string> split(string s)
// {
//     string res = "";
//     vector<string> V;
//     for(int i = 0; i < s.size(); i++)
//     {
//         if(s[i] != ' ')
//         {
//             res += s[i];
//         }
//         else
//         {
//             V.push_back(res);
//             res = "";
//         }
//     }
//     V.push_back(res);
//     return V;
// }


int main(void)
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    // freopen("tests.txt","r",stdin);

    int T, mass_moon;
    cin >> T >> mass_moon;

    map<string, int> V;

    string elephant;
    int gravity, mass;
    while (T--)
    {
        cin >> elephant >> gravity >> mass;
        if (mass <= mass_moon)
        {
            V[elephant] = elephant.size() * gravity;
        }
    }
    int maxi = 0;
    string res = "";
    for(auto &i : V)
    {
        if (i.second > maxi)
        {
            maxi = i.second;
            res = i.first;
        }
    }
    if (res != "")
    {
        cout << res << " to the moon!" << "\n";
    }
    else
    {
        cout << "dead meme :(" << "\n";
    }
}