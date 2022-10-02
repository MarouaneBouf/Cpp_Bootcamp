#include <iostream>
#include <bits/stdc++.h>


int binary_search(std::vector<int>array, int target)
{
    int mid;
    int low = 0, high = array.size()-1;
    while (high >= low)
    {
        mid = low + (high - low)/2;
        if(array[mid] == target) return mid;
        else if (array[mid] > target) high = mid-1;
        else low = mid + 1;
    }
    return -1;
}



int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    freopen("cpp_Cp.txt","r",stdin);
    
    int size_V;
    std::cin >> size_V;
    std::vector<int> V(size_V);

    for(int i = 0; i < size_V ; i++) std::cin >> V[i];

    std::cout<< "Element at index: " << binary_search(V,9) << "\n";    
}