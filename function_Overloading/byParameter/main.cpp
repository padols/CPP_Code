#include<iostream>
using namespace std;

int max(int a, int b)
{
    cout<<"Int max::"<<endl;
    return (a>b)? a:b;
}

double max(double a, double b)
{
    cout<<"max double"<<endl;
    return (a>b)? a:b;
}

std::string_view max(std::string_view  a, std::string_view  b)
{
    cout<<"max string"<<endl;
    return (a>b)? a:b;
}

int main()
{
    int fInt =102;
    int SecInt = 45;
    
    int resultInt = max(fInt,SecInt);
    
    cout<<"interger max  :: "<<resultInt<<endl;
    
    
    double fd = 44.7;
    double sd = 4562.5;
    
    double resultDob  = max(fd,sd);
    cout<<"double ::"<<resultDob<<endl;
    
    string_view s1 = "Hello";
    string_view s2 = "world";
    
    string_view resultStr = max(s1,s2);
    
    cout<<" max string_view  "<<resultStr<<endl;
    
    
}
