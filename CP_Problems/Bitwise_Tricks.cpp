#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <string.h>


using namespace std;

#define ll long long int;

int main(void)
{
    int T;
    cin >> T;
    while (T--)
    {
        if (T&1 != 0)
        {
            cout << T << " ODD\n";
        }
        else
        {
            cout << T << " EVEN\n";
        }
    }
    
}