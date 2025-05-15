#include <iostream>
using namespace std;
double max(double & num1, double &num2){
     cout<<"double max is called"<<endl;
    return (num1>num2)?num1:num2;   
}

int max(int & num1, int &num2){
    cout<<"int max is called"<<endl;
    return (num1>num2)?num1:num2;
}



int main(){

	double  doubles[] {10.0,30.0,12.3};
	int  ints[] {1,2,5,2,8,4};
    char num1 = 10;
    char num2 = 44;
    int int_a {static_cast<int>(num1)};
    int int_b {static_cast<int>(num2)};
    auto result = max(int_a,int_b);
    std::cout << "result : " << result << std::endl;
   
    return 0;
}
