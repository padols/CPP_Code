//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

#include <string>
// User function Template for C++
class Solution {
  public:
    int isValid(string& s) {
        
        int n = s.size();
        if(n<7)
          return 0;
          
        vector <string>v;
        stringstream ss(s);
        while(ss.good())
        {
            string substring;
            getline(ss,substring,'.');
            //cout<<"substring :: "<< substring<<endl;
            v.push_back(substring);
        }
        if(v.size()!= 4)
           return 0;
        for(int i = 0; i<v.size();i++)
        {
           string temp = v[i];
           //cout<<"temp :: "<<temp<<endl;
           if(temp == "")
             return 0;
             
           
           if(temp.size()>1)
           {
               if(temp == "0")
               {
                   return 0;
               }
               if(temp[0] == '0')
               {return 0;}
           }    
               for(int j = 0; j<temp.size();j++)
               {
                   if(isalpha(temp[j]))
                   {
                       return 0;
                   }
               }
               
               if(stoi(temp) > 255)
                 return 0;
           
            
        }
        return 1;
    }
};


//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        // if (s.size() == 3) {
        //     cout << "false" << endl;
        //     return 0;
        // }
        Solution ob;
        bool f = ob.isValid(s);
        if (f)
            cout << "true" << endl;
        else
            cout << "false" << endl;

        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends
