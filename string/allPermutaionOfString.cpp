//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    
    vector<string> findPermutation(string &s) {
        // Code here there
        std::vector <string> result;
        int i = 0;
        for (i = 0; i<s.size();i++)
        {
            if(s[0] != s[i])
            {
                break;
            }
        }
        if(i==s.size())
        {
            result.push_back(s);
            return result;
        }
        
        recursivefunction(0, s,result);
        
        sort(result.begin(),result.end());
        auto it = unique(result.begin(), result.end());
        
        result.erase(it,result.end());
        return result;
    }
    void recursivefunction(int index, string &s, vector<string> &ans);
};
void Solution::recursivefunction(int index, string &s, vector<string> &ans)
{
    if(index == s.size())
    {
        ans.push_back(s);
        return;
    }
    
    for(int i = index;i<s.size();i++)
    {
        swap(s[index],s[i]);
        recursivefunction(index+1,s,ans);
        swap(s[index],s[i]);
    }
}


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        vector<string> ans = ob.findPermutation(S);
        sort(ans.begin(), ans.end());
        for (auto i : ans) {
            cout << i << " ";
        }
        cout << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends
