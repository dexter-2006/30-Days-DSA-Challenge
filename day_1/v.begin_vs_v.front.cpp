#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v={10,20,30,40,50};

    // v.front() and v.back() 

    cout<<v.front()<<endl;
    int p = v.front()+2;
    cout<<p<<endl;
    cout<<v.back()<<endl;
    // now v.front() and v.back() gives value not the iterator
    // means they are not pointing to the elements inside the stl or vector

    // v.begin()

    vector <int> :: iterator it = v.begin();

    // the iterator points to the first elements
    // but the value of the v.begin is not 10 it just points on that first element
    
    cout<<*it<<endl;

    it++;
    // it points to the next elements
    // the real difference between v.front and v.begin is this
    // it++ give 20 next element but v.front++ gives 11

    cout<<*it<<endl;
    // dont forget to add *
}