// Write a program of to swap the two values using template

#include <iostream> 
using namespace std; 
   
template <class T> 
int swap_numbers(T& x, T& y) 
{ 
    T t; 
    t = x; 
    x = y; 
    y = t; 
    return 0; 
} 
  
int main() 
{ 
    int a, b; 
    cout<<"enter the number";
    cin>>a;
     cout<<"enter the number";
    cin>>b;
    swap_numbers(a, b); 
    cout << a << " " << b << endl; 
    return 0; 
}