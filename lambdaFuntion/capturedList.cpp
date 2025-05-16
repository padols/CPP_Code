#include <iostream>
using namespace std;

   /*
    Lambda function signature : 
                                [capture list] (parameters) ->return type{
                                        // Function body
                                }
    */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    
    /*called lambda function*/
    int a=10,b = 20;
    auto fun = [a,b](){ cout<<"Hello World  a::"<<a<<" b::: "<<b<<endl;};
    for(size_t i = 0 ; i<6;i++)
    {
        fun();
        a++;
        b++;
    }
    a=10;
    b=20;
    auto fun2 = [&a,&b](){ cout<<"Hello World  a::"<<a<<" b::: "<<b<<endl;};
    for(size_t i = 0 ; i<6;i++)
    {
        fun2();
        a++;
        b++;
    }
 
   /* 
    
    [](){cout<<"Auto Call Lambda function"<<endl;}();
    
    
    [](double a, double b){cout<<"a+b  "<<a+b<<endl;}(12.5,34.1);
    
    [](double a, double b){cout<<"double return a+b  ::"<<a+b<<endl;}(12.5,34.1);
    
    auto result =  [](double a, double b)->int{cout<<"int return a+b  ::"<<a+b<<endl;
        return a+b;
    };
    
    auto result1 = result(10.1,20.3);
    cout <<"result ::" << result1<<endl;
    
    
*/
    return 0;
}
