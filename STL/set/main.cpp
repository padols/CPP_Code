#include<iostream>
#include<set>
using namespace std;
template <typename T>
void print_Collection(const T& a)
{
    auto itS = a.begin();
    auto itE = a.end();
    
    while(itS!= itE)
    {
        cout<<" "<< *itS;
        
        itS++;
    }
    cout<<endl;
    
}
bool compare_ints(int left, int right)
{
    return left>right;
}
class Book{
    private:
       int Year;
       string BookName;
    public:
       Book(int Year, string BookName)
       {
           this->Year = Year;
           this->BookName = BookName;
       }
       
       bool operator<(const Book & ref)const
       {
           return this->Year < ref.Year;
       }
       
       friend std::ostream& operator<<(std::ostream & out, const Book &b);
       
};

std::ostream& operator<<(std::ostream & out, const Book &b)
{
          out << "Book [" << b.Year << ", " << b.BookName << "]";
          return out;
}

class IntComparator{
    public:
       bool operator()(int right, int left)
       {
           return right>left;
       }
};
int main()
{
    
    std::set<int> num1{11,45,20,1,44,6,32,99,234,14,24};
    
    cout<<"print Normal Set  num1 :: ";
    print_Collection(num1);
    
    
    //Set of custom types : Need to implement operator<
    std::set<Book> books {Book(2000,"Cooking Food"),
                    Book(1930,"Building Computers"),Book(1995,"Farming for Beginners")};
                    
    print_Collection(books);
    
    std::set<int,std::less<int>> numbers1 {11,16,2,9,12,15,6,15,2};  // Built in functor
    
    print_Collection(numbers1);
    
    std::set<int,std::greater<int>> numbers2 {11,16,2,9,12,15,6,15,2};  // Built in functor
     print_Collection(numbers2);
     
     std::set<int,IntComparator> numbers3 {12,16,14,18,24,10,29,77,3}; // Use Custom functor
    print_Collection(numbers3);
    
    
    std::set<int,bool(*)(int,int)> numbers4(compare_ints) ; 
    numbers4.insert({11,16,2,9,12,15,6,15,2});
    print_Collection(numbers4);
    
}
