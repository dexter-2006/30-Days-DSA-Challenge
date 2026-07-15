#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v={10,20,30,40,50};
    // this is vector which contains int
    
    vector <int> :: iterator it = v.begin();
    // now to access the element we have first vector the data type <int>
    // ::
    // iterator it
    // it is variable name we can add anything but common is this one
    // v.begin() means to point on the first element
    cout<<*(it)<<endl;
    it++;
    // it points to second element
    // cout<<*(it++); this will not work you have to increment or decrement it outside
    cout<<*(it)<<endl;

    // types of iterator are = v.begin()
    //                         v.end()
    //                         v.rend()
    //                         v.rbegin()
    vector <int> :: iterator its = v.end();
    // v.end()= not points to last element 
    // but the element after last element
    its--;
    // if you want to print last element the use decrement operator
    cout<<v.back()<<endl;
    // to print last element use v.back()
    // v.back gives value not iterator

}