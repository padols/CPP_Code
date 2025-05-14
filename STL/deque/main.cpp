#include<iostream>
#include<deque>
using namespace std;
template<typename T>

void printDeque(const T &d)
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
 
    std::deque<int> inst1 = {1,2,3,4,5,6,7};
    
    printDeque(inst1);
    cout<<"push_back/push_front"<<endl; 
    inst1.push_front(10);
    
    inst1.push_back(9);
    
    printDeque(inst1);
    cout<<"pop_front/popback"<<endl; 
    inst1.pop_front();
    
    inst1.pop_back();
    printDeque(inst1);
    
    cout<<"insert Element t Pos 4"<<endl; 
    auto it = inst1.begin();
    it = it+4;
    
    inst1.insert(it,8);
    
    printDeque(inst1);
    
    cout<<"inst1.at(4)  :: "<< inst1.at(4)<<endl;
    cout<<"inst1.front():: "<< inst1.front()<<endl;
    cout<<"inst1.back():: "<< inst1.back()<<endl;
    
    cout<<"remove 4th element"<< endl<<endl;
    inst1.erase(inst1.begin()+4);
    printDeque(inst1);
    
    
    cout<<"remove range element"<< endl<<endl;
    inst1.erase(inst1.begin(), inst1.begin()+3);
    
    printDeque(inst1);
    cout<<"emplace , 0,1,2 pos"<<endl;
    inst1.emplace(inst1.begin(),1);
    inst1.emplace(inst1.begin()+1,2);
    inst1.emplace(inst1.begin()+2,3);
    printDeque(inst1);
    
    cout<<"emplace front and back"<<endl;
    
    inst1.emplace_front(10);
    inst1.emplace_back(9);
    printDeque(inst1);
    
    
    
    std::deque<int>inst2{100,200,300,400,500};
    
    
    inst1.swap(inst2);
    
    cout<< "swap"<<endl;
    cout<<"inst1::" <<endl;
     printDeque(inst1);
     
      cout<<"inst2::" <<endl;
      printDeque(inst2);
    
    
    
}

