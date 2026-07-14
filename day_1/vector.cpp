#include <iostream>
#include <vector>
#include <utility>
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

    //PAIR in  vector 
    //the syntax is [ vector<pair<int,int>> p ]
    // first vector then < the we indicate we are using pair then what data type
    // we are storing inside the pair , in this we are using int,int and the variable name

    vector <pair<int,char>> p;

    p.push_back({1,'a'});
    p.emplace_back(3,'b');
    cout<<p[0].first<<endl;
    cout<<p[0].second<<endl;
    cout<<p[1].first<<endl;
    cout<<p[1].second<<endl;

    // remeber to acess anything in vector use the array concept of indexing
}