
#include <iostream>
#include <stack>
#include <vector>
#include <list>
#include <deque>
using namespace std;
class Book{
    friend std::ostream& operator<< (std::ostream& out, const Book& operand);
public : 
    Book() = default;
    Book(int year, std::string title) 
        : m_year(year),m_title(title)
        {
        }
        
    bool operator< (const Book & right_operand)const{
        return this->m_year < right_operand.m_year;
    }
    
private : 
    int m_year;
    std::string m_title;
};

std::ostream& operator<< (std::ostream& out, const Book& operand){
    out << "Book [" << operand.m_year << ", " << operand.m_title << "]";
    return out;
}
/*template<typename T, typename Container=std::deque<T>>
void print_stack(std::stack<T,Container> stack)
{
     std::cout << "stack of elements : [";
    while(!stack.empty())
    {
        auto item = stack.top();
        cout<< item<<" ";
        stack.pop();
        
    }
    cout<<"]"<<endl;
}

*/
template<typename T, typename Container = std::deque<T>>

void clear_stack(std::stack<T,Container> &stack)
{
    cout<<"clear stack";
    
    while(!stack.empty())
    {
        stack.pop();
    }
}

template<typename T, typename Container = std::deque<T>>
void print_stack(std::stack<T,Container> stack){

//template <typename T>
//void print_stack(std::stack<T> stack){


    //Notice that we're working on a copy here. IMPORTANT
    std::cout << "stack of elements : [";
    while(!stack.empty()){
        T item = stack.top();
        std::cout << " " << item ;
        stack.pop(); // Poping from a copy doesn't affect the original. We're good here.
    }
    std::cout << "]" << std::endl;
}
/*
template <typename T, typename Container = std::deque<T>>
void clear_stack(std::stack<T,Container>& stack){
//template <typename T>
//void clear_stack(std::stack<T>& stack){

    std::cout << "Clearing stack of size : " << stack.size() << std::endl;
    while(!stack.empty()){
        stack.pop();
    }
}
*/

int main()
{
    std::stack<int> num1;
    
    num1.push(10);
    num1.push(20);
    num1.push(30);
    
    print_stack(num1);
    
    clear_stack(num1);
    cout<<"num:: "<<endl;
    print_stack(num1);
    
    
    num1.push(10);
    num1.push(20);
    num1.push(30);
    cout<<"After Pop "<<endl;
    num1.pop();
    print_stack(num1);
    
    
    num1.push(40);
    num1.push(50);
    num1.push(60);
    print_stack(num1);
    
    cout<<"num.top():: "<< num1.top()<<endl;
    
    
    //Code4 : Stack of user defined types
    std::stack<Book> books;
    books.push(Book(1921,"The Art of War"));
    books.push(Book(2000,"Social Media Marketing"));
    books.push(Book(2020,"How the Pandemic Changed the World"));
    
    std::cout << "books : ";
    print_stack(books);
    std::cout << "books size : " << books.size() << std::endl;

}
