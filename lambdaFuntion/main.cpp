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
    auto fun = [](){ cout<<"Hello World"<<endl;};
    
    fun();
    
    fun();
    
    
    [](){cout<<"Auto Call Lambda function"<<endl;}();
    
    
    [](double a, double b){cout<<"a+b  "<<a+b<<endl;}(12.5,34.1);
    
    [](double a, double b){cout<<"double return a+b  ::"<<a+b<<endl;}(12.5,34.1);
    
    auto result =  [](double a, double b)->int{cout<<"int return a+b  ::"<<a+b<<endl;
        return a+b;
    };
    
    auto result1 = result(10.1,20.3);
    cout <<"result ::" << result1<<endl;
    
    

    return 0;
}
