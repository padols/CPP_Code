#include<iostream>
#include<forward_list>
using namespace std;
template<typename T>

void printFwdList(const T &d)
{
    auto itS = d.begin();
    auto itE = d.end();
    
    cout<< "[";
    while(itS!= itE)
    {
        cout<< *itS<<" ";
        itS++;
    }
    cout<<"]"<<endl;
}

int main()
{
 
    std::forward_list<int> inst1 = {1,2,3,4,5,6,7};
    
     std::forward_list<int> inst2;
    printFwdList(inst1);
    
    auto it = inst1.before_begin();
    
    cout<<"it = before_begin()::: " <<*it<<endl;
    
    
    it = inst1.begin();
    
    cout<<"it = begin()::: " <<*it<<endl;
    
    auto it2 = inst1.cbegin();
    cout<<"inst1.cbegin()::: " <<*it2<<endl;
    
    //*it2  = 2;  readOnly;
    // cout<<"*it2  = 2::: " <<*it2<<endl;
    
    cout<< "inst1.max_size()::"<<inst1.max_size()<<endl;
    
    if(!inst1.empty())
    {
        cout<<"inst1 list is not empty"<<endl;
    }
    
    
    
    if(inst2.empty())
    {
        cout<<"inst2 list is not empty"<<endl;
    }
   
    inst1.emplace_front(10);
    cout<<"emplace_front :: "<<endl;
    printFwdList(inst1);
    
    
    inst1.push_front(11);
    cout<<"push_front :: "<<endl;
    printFwdList(inst1);
    
    
     inst1.pop_front();
    cout<<"pop_front :: "<<endl;
    printFwdList(inst1);
    
    it = inst1.begin();
   /* inst1.emplace_after(it,8);
     cout<<"emplace_after :: "<<endl;
    printFwdList(inst1);*/   //check this
    
    inst1.insert_after(inst1.before_begin(),{9,8,11,12});
     cout<<"insert_after :: "<<endl;
    printFwdList(inst1);
    
    

    
    
    
   
}

