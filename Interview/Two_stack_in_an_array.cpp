#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class TwoStackWithOneArray{
    private:
        int *arr;
        int top1;
        int top2;
        int size;
    public:
        TwoStackWithOneArray(int n)
        {
            arr = new int[n];
            top1 = (n/2)+1;
            this->top2 = n/2;
            size = n;
        }
        ~TwoStackWithOneArray()
        {
            delete arr;
        }
        
        void push1(int val)
        {
            if(top1<size)
            {
                arr[top1++] = val;
            } else
            {
                cout<<"stack overflow"<<endl;
            }
        }
        void push2(int val)
        {
            if(top2>=0)
            {
                arr[top2--] = val;
            } else
            {
                cout<<"stack overflow"<<endl;
            }
        }
        
        int pop1()
        {
            if(top1 >(size/2))
            {
                return arr[--top1];
               
            } else
            {
                cout<<endl<<"stack 1 is empty"<<endl;
                return -1;
            }
        }
        
        int pop2()
        {
            if(top2<size/2)
            {
                return arr[++top2];
            } else
            {
                 cout<<endl<<"stack  2 is empty"<<endl;
                 
                 return -1;
            }
        }
        
        
};

int main()
{
    TwoStackWithOneArray ts(5);
    
    ts.push1(2);
    ts.push1(3);
    ts.push2(4);
    cout << ts.pop1() << " ";  
    cout << ts.pop2() << " ";  
    cout << ts.pop2() << " ";  
    return 0;
    
    
}
