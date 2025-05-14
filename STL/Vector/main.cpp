/******************************************************************************

                              Online C++ Debugger.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Debug" button to debug it.

*******************************************************************************/

#include <iostream>
#include<vector>
using namespace std;
template <typename T>



void print_Raw_vector(const std::vector<T>& P, int size)
{
     cout<<"DATA: ";

     for(int i = 0; i < size; i++)
     {
        cout << P[i]<<"  ";
     }
     cout << endl;
}

int main()
{

   vector<string> vec_str{"The","sky","is","blue","my","friend"};


   cout<< "string vector : "<<endl;

   print_Raw_vector(vec_str,vec_str.size());

   vector<int> vec_int(20,55);

   cout<< "int vector : "<<endl;
   print_Raw_vector(vec_int,vec_int.size());

   return 0;
}

