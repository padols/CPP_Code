

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
auto print = [](const int &n)
{
    cout<< n<<" ";
};

class DevidedBy{
    public:
        int d{0};
        DevidedBy (int n) {this->d = n;};
        bool operator()(const int n)const
        {
            return (n%d == 0);
        }
        
};
int main()
{
    vector<int> inst1{4,2,7,6,8,12,10};
    set<int> inst2{44,12,5,6,7,33,22,67,3};
    array<int,10> n {3,56,1,77,43,2,67,88,};
    
    if(any_of(inst1.begin(),inst1.end(),DevidedBy(7)))
    {
        cout<<"atleast one of element DevidedBy 7"<<endl;
    } else
    {
        cout<<"none of element DevidedBy by 7"<<endl;
    }
    
    if(all_of(inst1.begin(),inst1.end(),[](int n){return(n%2 == 0);}))
    {
        cout<<"all of element are even"<<endl;
    } else
    {
        cout<<"not all element are even"<<endl;
    }
    
    if(none_of(inst1.begin(),inst1.end(),[](int n){return(n%2 != 0);}))
    {
        cout<<"none of element are odd"<<endl;
    } else
    {
        cout<<"atleastone  element are odd"<<endl;
    }
    

    return 0;
}
