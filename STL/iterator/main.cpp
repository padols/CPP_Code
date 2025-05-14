

#include <iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
template <typename T>

/*void print_vec(const std::vector<T> &p)
{
    for(int i {}; i<p.size(); i++)
    {
        cout<< p[i] << "  ";
    }
    cout<<endl;
    
}
*/
void printIterator(const T & collection)
{
    auto itstart = collection.begin();
    auto  it_end = collection.end();
    
    
    while(itstart != it_end)
    {
        cout<< *itstart++ << " "<<endl;
    }
    
    cout<<endl;
}

int main()
{
    std::vector<string> str = {"the","sky", "is","blue","my","friend"};
    std::vector<int> inst = {11,12,13,14};
    std::vector<int> inst2 = {1,2,3,4,5};
    std::vector<int> inst3 = {8,6,4};
    /*cout<<"print str::"<<endl;
    print_vec(str);
    cout<<"print inst::"<<endl;
    print_vec(inst);
    cout<<"print inst2::"<<endl;
    print_vec(inst2);
    cout<<"print inst3::"<<endl;
    print_vec(inst3);*/
    
    cout<<"print  using Iterator inst::"<<endl;
    printIterator(inst);
    
    cout<<"print  using Iterator str::"<<endl;
    printIterator(str);
    
    return 0;
}
