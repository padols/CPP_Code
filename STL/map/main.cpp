#include<iostream>
#include<set>
#include<map>
using namespace std;
template <typename T,typename K>
void print_Collection(const map<T,K>& a)
{
    auto itS = a.begin();
    auto itE = a.end();
    
    while(itS!= itE)
    {
        cout<<"first:: "<< itS->first<< "Second:: "<<itS->second<<endl;
        
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
    
    std::map<int,int> num1{{2,11},{1,45},{0,20},{6,1},{3,44},{4,6},{5,32}};
    
    cout<<"print Normal Set  num1 :: "<<endl;
    print_Collection(num1);
    
    
    //Set of custom types : Need to implement operator<
    std::map<int,Book> books {{2,Book(2000,"Cooking Food")},
                    {1,Book(1930,"Building Computers")},{5,Book(1995,"Farming for Beginners")}};
                    
   // print_Collection(books);
    for(const auto&[key,value] : books){
        std::cout << "  book [ " << key << " ]:" << value << std::endl;
    }
    cout<<endl;
     for(const auto& elt : books){
        std::cout << "  book [" << elt.first << " ] : " << elt.second << std::endl;
    }
    
    std::cout << std::endl;
    std::cout << "Iterators : " << std::endl;
    
    auto it_access = num1.begin();
    
    std::cout << " numbers (forward iterators) : [";
    while(it_access!=num1.end()){
        std::cout << " " << num1[it_access->first];
        ++it_access;
    }
    std::cout << "]" << std::endl;
    
    auto it_modify = num1.begin();
    
    while(it_modify!=num1.end()){
        if( it_modify->first == 3)
           num1[it_modify->first] = 222; // Modify values in the map
        ++it_modify;
    }
    print_Collection(num1);
    
    
     auto it_back_books = books.rbegin();
    while(it_back_books != books.rend()){
            //Will require you to add a default constructor to Book.
            //This is an implementation detail of std::map. If we cut out the line
            //using operator[] the requirement for the default constructor goes away.
        cout << " " << it_back_books->first <<  " - " << it_back_books->second  << std::endl;
        ++it_back_books;        
    }
    //print_Collection(books);
     //Clear
    std::cout << std::endl;
    std::cout << "clear :" << std::endl;
    
    std::cout << " numbers : " ;
    print_Collection(num1);
    
    num1.clear();
    
    std::cout << " numbers : " ;
    print_Collection(num1);
    std::cout << std::boolalpha;
    std::cout << " numbers is empty : " << num1.empty() << std::endl;
    
    
    //Insert  : return an std::pair object containing result about the insert operation.
    std::cout << std::endl;
    
    
    
    
}
