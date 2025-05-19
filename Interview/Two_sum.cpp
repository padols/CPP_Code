//Two Sum Element;
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int target = 9;
void findTwoSumIndex(vector<int> arr)
{
    unordered_set <int>s;
    
    for(int i = 0; i<arr.size();i++)
    {
        int complement = target - arr[i];
        
        auto it = find(arr.begin(),arr.end(),complement);
        
        if(it != arr.end())
        {
            cout<< "index "<< it - arr.begin() << "  " << i << endl;
        }
    }
    
    
}




int main()
{
    vector<int> arr{2,7,10,11};
    
    findTwoSumIndex(arr);
    
    return 0;
    
}
