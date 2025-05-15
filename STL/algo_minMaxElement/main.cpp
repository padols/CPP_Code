

#include <iostream>
#include<bits/stdc++.h>
using namespace std;




int main()
{
    vector<int> inst1{4,2,7,6,8,12,10};
   
    auto n = max_element(inst1.begin(),inst1.end());
    
    cout<<"max element "<<*n<<endl;
/*
    //Distances : closest and furthest
    int number_to_find {100};
    
    auto distance = [number_to_find](int x, int y){
        return (std::abs(x-number_to_find) < std::abs(y-number_to_find));
    };
  */  
    int number_to_find{67};
    auto distance = [number_to_find](int x,int y)
    {
        return (abs(x-number_to_find) < abs(y-number_to_find));
    };    
    //Finding the closest
    auto result = std::min_element(std::begin(inst1),std::end(inst1),distance);
    std::cout << *result << " is closest to " << number_to_find << std::endl;
 
 
    //Finding the far
    result = std::max_element(std::begin(inst1),std::end(inst1),distance);
    std::cout << *result << " is far to " << number_to_find << std::endl;
 
 
   cout<<std::endl<<std::endl;
     const auto [near,far] = minmax_element(std::begin(inst1),std::end(inst1),distance);
     std::cout << *near << " is closest to " << number_to_find << std::endl;
     std::cout << *far << " is far to " << number_to_find << std::endl;
     
    return 0;
}
