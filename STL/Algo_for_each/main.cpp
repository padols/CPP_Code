

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
auto print = [](const int &n)
{
    cout<< n<<" ";
};

class sum{
    public:
        int s{0};
        void operator()(const int n)
        {
            
            s=s+n;
            cout<<"n "<<n<<" s "<<s<<endl;
        }
        
};
int main()
{
    vector<int> inst1{4,5,6,7,8,9,10};
    set<int> inst2{44,12,5,6,7,33,22,67,3};
    array<int,10> n {3,56,1,77,43,2,67,88,};
    
    cout<<"print vector"<<endl;
    for_each(inst1.begin(),inst1.end(),print);
    
    cout<<endl;
    
    cout<<"print set"<<endl;
    for_each(inst2.begin(),inst2.end(),print);
    
    cout<<endl;
    
    cout<<"print std::array<T, N> ;"<<endl;
    for_each(n.begin(),n.end(),print);
    cout<<endl;
    sum s;
    for_each(n.begin(),n.end(),[](int &n){n = n+1;});
    s = std::for_each(std::begin(n), std::end(n), s);
    
    cout<< "total Sum of array n :: "<< s.s<<endl;
    cout<<"increment set byone ;"<<endl;
    for_each(n.begin(),n.end(),print);
    cout<<endl;
    
    
    //Using a lambda that captures a local variables by ref and modifies it.
    
    int out_put = 0;
    
    std::for_each(std::begin(n), std::end(n), [&out_put](int n){out_put += n;});
     
     
    cout<<"lambda output variable :: "<< out_put<<endl;

    return 0;
}
