#include<iostream>
#include<bits/stdc++.h>
using namespace std;

template<typename T>

T maximum(T a, T b)
{
    return (a>b)?a:b;
}
template <>
const char* maximum<const char*>(const char* a,const char* b)
{
    return (strcmp(a,b) == 0?a:b);
}
int main()
{
    int a{5};
    
    int b{19};
    
    cout<<"int maximun :: "<< maximum(a,b)<<endl;
    
    double c{3.1};
    double d{78.9};
    
    cout<<"double maxium :: "<< maximum(c,d)<<endl;
    
    string e{"hello"};
    string f{"world"};
    
    cout<<"string maxium::  "<<maximum(e,f)<<endl;

    cout<<"max in int and double  :: "<<maximum<double>(a,d)<<endl;

    const char *result =  maximum<const char*>(e,f);
    cout<<"string maxium::  "<<result<<endl;
    
    return 0;
}
