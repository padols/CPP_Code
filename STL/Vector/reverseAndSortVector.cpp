//{ Driver Code Starts
//Initial Template for C++

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> sortVector(vector<int>v);
vector<int> reverseVector(vector<int>v);

// } Driver Code Ends

// User function Template for C++

vector<int> sortVector(vector<int> v) {
    // Your code here. Use library function
    
    std::sort(v.begin(),v.end());
    return v;
}

vector<int> reverseVector(vector<int> v) {
    // Your code here. Use library function
    vector<int> result;
    auto itS = v.rbegin();
    auto itE = v.rend();
    
    while(itS != itE)
    {
        result.push_back(*itS);
        itS++;
    }
    
    return result;
}


//{ Driver Code Starts.


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int>v;
	    for(int i=0;i<n;i++)
	    {
	        int x;
	        cin>>x;
	        v.push_back(x); //Input vector elements
	    }
	    
	    v=sortVector(v); //sort and store in v
	   
	   for(auto x:v)
	   cout<<x<<" "; //print elements of v
	   cout<<endl; 
	   v=reverseVector(v); //reverse v and store it in v
	   for(auto x:v)
	   cout<<x<<" "; //print elements of v
	   cout<<endl;
	   
	
cout << "~" << "\n";
}
	return 0;
}

// } Driver Code Ends
