#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v;
    // vector this is permanent then we use cross bracket to tell 
    // what is the data type and at last we use variable name
    // variable name can be anything 
    v.push_back(1);
    // push_back is used to insert element inside the vector
    cout<<v[0]<<endl;
    // to access the element inside the vector we used similar to array
    v.emplace_back(2);
    cout<<v[1]<<endl;
    //  the main difference betweeen push_back and emplace_back
    // push_back()=insert existing object into a vector. if i pass a temporary object
    // it created first and then copied or move into the vector
    // emplace_back()=constructs the object directly inside the vectors memory, so it can avoid copy/move
    // into the vector
}