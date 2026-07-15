#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v(5,100);
    // now this is vector which container 100 in 5 container
    cout<<v[1]<<endl;
    vector <char> p(3);
    // this is empty vector but value is not defined
    //copy constructor
    vector <int> v2(v);
    //the value of vector v will be copied
}